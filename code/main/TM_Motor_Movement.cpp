#include "Arduino.h"
#include <Adafruit_MotorShield.h>
#include "TM_Motor_Movement.h"
#include <Servo.h>
#include "string.h"

TM_Motor_Movement::TM_Motor_Movement(
        // starting input bitstring
        String  bitstring,
        //
        uint8_t film_dc_pin,
        uint8_t stepper_pin,
        uint8_t eraser_actuation_pin,
        uint8_t eraser_control_pin,
        uint8_t eraser_actuation_min,
        uint8_t eraser_actuation_max,
        uint8_t erase_all_distance,
        uint8_t eraser_speed,
        uint8_t stepper_total_steps,
        uint8_t stepper_move_steps,
        uint8_t stepper_speed,
        uint8_t dc_film_speed,
        uint8_t draw_actuation_servo_pin,
        uint8_t draw_control_servo_pin,
        uint8_t marker_up_pos,
        uint8_t marker_down_pos,
        uint8_t head_min_pos,
        uint8_t head_max_pos,
        uint8_t zero_lines,
        uint8_t bit_space,
        uint8_t eraser_head_distance,
        uint8_t eraser_distance,
        uint8_t eraser_to_write_dist,
        uint8_t write_to_camera
) :

        start_bitstring(bitstring),

        film_dcM_pin(film_dc_pin),
        dcM_film_speed(dc_film_speed),

        stepperM_pin(stepper_pin),
        stepperM_total_steps(stepper_total_steps),
        stepperM_move_steps(stepper_move_steps),
        stepperM_speed(stepper_speed),

        eraser_actuationM_pin(eraser_actuation_pin),
        eraser_controlM_pin(eraser_control_pin),
        eraser_actuationM_min(eraser_actuation_min),
        eraser_actuationM_max(eraser_actuation_max),
        eraserM_speed(eraser_speed),
        eraserM_head_distance(eraser_head_distance),
        eraserM_distance(eraser_distance),
        eraserM_to_write_dist(eraser_to_write_dist),
        erase_all_dist(erase_all_distance),

        draw_actuation_servoM_pin(draw_actuation_servo_pin),
        draw_control_servoM_pin(draw_control_servo_pin),
        marker_down_posi(marker_down_pos),
        marker_up_posi(marker_up_pos),
        head_min(head_min_pos),
        head_max(head_max_pos),
        zero_lines_num(zero_lines),
        bit_spacing(bit_space),
        write_to_cam(write_to_camera)
{

};

void TM_Motor_Movement::begin() {
    Serial.begin(9600);
    AFMS = Adafruit_MotorShield();
    // Serial.println("MotorShield Found!");
    fineFilmControl = AFMS.getStepper(stepperM_total_steps, stepperM_pin);
    // Serial.println("Stepper Found!");
    coarseFilmControl = AFMS.getMotor(film_dcM_pin);
    // Serial.println("DC Motors Found!");
    eraserControl = AFMS.getMotor(eraser_controlM_pin);
    // Serial.println("Eraser Found!");
    eraserActuation.attach(eraser_actuationM_pin);
    eraserActuation.write(eraser_actuationM_max);
    delay(300);
    // Serial.println("Eraser acuation home!");
    drawingActuation.attach(draw_actuation_servoM_pin);
    drawingActuation.write(marker_up_posi);
    delay(300);
    // Serial.println("Drawing acuation home!");
    drawingControl.attach(draw_control_servoM_pin);
    drawingControl.write(head_min);
    delay(300);
    // Serial.println("Drawing control home!");
    AFMS.begin();
    // Serial.println("Initiation Successful!");
}

void TM_Motor_Movement::moveFilmForward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(stepperM_move_steps, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    // Serial.println("Film Forward!");
}

void TM_Motor_Movement::moveFilmBackward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(stepperM_move_steps, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    // Serial.println("Film Backward!");
}

void TM_Motor_Movement::moveOneBitForward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(bit_spacing, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
}

void TM_Motor_Movement::moveOneSymbolForward() {
    moveOneBitForward();
    delay(50);
    moveOneBitForward();
    delay(50);
    moveOneBitForward();
    delay(50);
}

void TM_Motor_Movement::moveOneBitBackward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(bit_spacing, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
}

void TM_Motor_Movement::moveOneSymbolBackward() {
    moveOneBitBackward();
    delay(50);
    moveOneBitBackward();
    delay(50);
    moveOneBitBackward();
    delay(50);
}

void TM_Motor_Movement::eraserDown() {
    //eraserActuation.write(eraser_actuationM_min);
    // Serial.println("Eraser Down!");
    for (int i = eraser_actuationM_max; i >= eraser_actuationM_min; i -=5) {
        eraserActuation.write(i);
        delay(20);
    }
}

void TM_Motor_Movement::eraserUp() {
    //eraserActuation.write(eraser_actuationM_max);
    // Serial.println("Eraser Up!");
    for (int i = eraser_actuationM_min; i <= eraser_actuationM_max; i +=5) {
        eraserActuation.write(i);
        delay(20);
    }
}

void TM_Motor_Movement::eraserOn() {
    eraserControl->setSpeed(eraserM_speed);
    eraserControl->run(FORWARD);
    // Serial.println("Eraser on!");
}

void TM_Motor_Movement::eraserOff() {
    eraserControl->setSpeed(0);
    // Serial.println("Eraser off!");
}

void TM_Motor_Movement::moveToErase(){
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(eraserM_head_distance, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
}

void TM_Motor_Movement::eraseBackward() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(eraserM_distance, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
}
void TM_Motor_Movement::eraserToWrite() {
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(eraserM_to_write_dist, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
}


void TM_Motor_Movement::eraseOneSymbol() {
    moveToErase();
    delay(500);
    eraserDown();
    delay(500);
    eraserOn();
    eraseBackward();
    eraserOff();
    delay(500);
    eraserUp();
    eraserToWrite();
}

void TM_Motor_Movement::eraseAll() {
    eraserDown();
    delay(500);
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(erase_all_dist, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(erase_all_dist, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(erase_all_dist, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(erase_all_dist, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    eraserUp();
}

void TM_Motor_Movement::headPositiveVerticalLine() {
    for (int i = head_min; i <= head_max; i +=5) {
        drawingControl.write(i);
        delay(20);
    }


    //drawingControl.write(head_max);
    delay(500);
    // Serial.println("Positive Line!");
}

void TM_Motor_Movement::headNegativeVerticalLine() {
    for (int i = head_max; i >= head_min; i-=5) {
        drawingControl.write(i);
        delay(20);
    }
    //drawingControl.write(head_min);
    delay(500);
    // Serial.println("Negative Line!");
}




void TM_Motor_Movement::markerDown() {
    for (int i = marker_up_posi; i >= marker_down_posi; i -=3) {
        drawingActuation.write(i);
        delay(20);
    }
    delay(500);
    //drawingActuation.write(marker_down_posi);
    // Serial.println("Marker Down!");
}

void TM_Motor_Movement::markerUp() {
    for (int i = marker_down_posi; i <= marker_up_posi; i +=3) {
        drawingActuation.write(i);
        delay(20);
    }
    delay(500);
    //drawingActuation.write(marker_up_posi);

    // Serial.println("Marker Up!");
}



void TM_Motor_Movement::drawBitOne() {
    markerDown();
    delay(500);
    headPositiveVerticalLine();
    delay(500);
    markerUp();
    delay(500);
    headNegativeVerticalLine();
    delay(500);
}

void TM_Motor_Movement::drawBitZero() {
    markerDown();
    delay(500);
    for (int i = 0; i <= zero_lines_num; i++) {
        headPositiveVerticalLine();
        delay(500);
        moveFilmForward();
        delay(500);
        headNegativeVerticalLine();
        delay(500);
        moveFilmForward();
        delay(500);
    }
    // moveFilmBackward();
    // for (int i = 0; i <= 2 * zero_lines_num; i++) {
    //   moveFilmBackward();
    // }
    markerUp();
}

void TM_Motor_Movement::drawOne() {
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
}

void TM_Motor_Movement::drawZero() {
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
}

void TM_Motor_Movement::drawX() {
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
}

void TM_Motor_Movement::drawY() {
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
}

void TM_Motor_Movement::drawBlank() {
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitOne();
    delay(500);
    moveOneBitForward();
    delay(500);
}

void TM_Motor_Movement::drawHash() {
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
    drawBitZero();
    delay(500);
    moveOneBitForward();
    delay(500);
}

void TM_Motor_Movement::drawAll() {
    for (int i = 0; i <= start_bitstring.length()-1; i++) {
        //Serial.println(start_bitstring[i]);
        //Serial.println(start_bitstring[i] == '0');
        if (start_bitstring[i] == '0') {
            // Serial.println("Drawing Zero!");
            drawZero();
            delay(500);
            delay(500);
        } else {
            // Serial.println("Drawing One!");
            drawOne();
            delay(500);
            delay(500);
        }
    }
}

void TM_Motor_Movement::goHome() {
    int bit_space_count = 0;

    for (int i = 0; i <= start_bitstring.length() - 1; i++) {
        if (start_bitstring[i] == '0') {
            bit_space_count += 5;
            //Serial.println(bit_space_count);
        } else {
            bit_space_count += 4;
            //Serial.println(bit_space_count);
        }
    }

    //Serial.println(bit_space_count);

    for (int i = 0; i <= bit_space_count - 1; i++) {
        fineFilmControl->setSpeed(stepperM_speed);
        coarseFilmControl->setSpeed(dcM_film_speed);
        coarseFilmControl->run(BACKWARD);
        fineFilmControl->step(bit_spacing, BACKWARD, MICROSTEP);
        coarseFilmControl->setSpeed(0);
        delay(500);
    }
}
void TM_Motor_Movement::goToCamera() {
    goHome();
    delay(2000);
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(write_to_cam, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
}

#include "Arduino.h"
#include <Adafruit_MotorShield.h>
#include "TM_Motor_Movement.h"
#include <Servo.h>
#include "string.h"

TM_Motor_Movement::TM_Motor_Movement(
    String  bitstring,                  // Starting input bitstring
    uint8_t film_dc_pin,                // Pin that the tape actuation DC motors are conencted to on the Motor Shield
    uint8_t stepper_pin,                // Pin that the tape actuation stepper motor is connected to on the Motor Shield
    uint8_t eraser_actuation_pin,       // Pin that the eraser head actuation servo is connected to on the Arduino
    uint8_t eraser_control_pin,         // Pin that the eraser head DC motor is connected to on the Motor Sheild
    uint8_t eraser_actuation_min,       // Low / eraser down position for the eraser head servo
    uint8_t eraser_actuation_max,       // High / eraser up position for the eraser head servo
    uint8_t erase_all_distance,         // Total stepper steps to eraser large sections on the tape after use
    uint8_t eraser_speed,               // 8 bit speed of the eraser DC motor
    uint8_t stepper_total_steps,        // The total number of steps that the stepper motor has
    uint8_t stepper_move_steps,         // Total number of steps for the stepper to move at once
    uint8_t stepper_speed,              // 8 bit speed for the stepper motor (microsteps used)
    uint8_t dc_film_speed,              // 8 bit speed of the tape actuation DC motors
    uint8_t draw_actuation_servo_pin,   // Pin for the servo that controls the vertical motion of the marker
    uint8_t draw_control_servo_pin,     // Pin the for the servo that controls the horizontal motion of the writing head
    uint8_t marker_up_pos,              // Servo positon for the marker in the up position
    uint8_t marker_down_pos,            // Servo position for the marker in the down position
    uint8_t head_min_pos,               // Servo position for the writing head at the start position
    uint8_t head_max_pos,               // Servo position for the writing head at the fully extended position
    uint8_t zero_lines,                 // Number of zig zag lines when drawing zero symbol
    uint8_t bit_space,                  // Stepper spaces between bits
    uint8_t eraser_head_distance,       // Stepper steps from under the camera to under the eraser head
    uint8_t eraser_distance,            // Stepper steps to erase one symbol
    uint8_t eraser_to_write_dist,       // Stepper steps from ther eraser to under the writing head
    uint8_t write_to_camera             // Stepper steps from under the writing head to under the camera
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
    //Serial.begin(9600);
    AFMS = Adafruit_MotorShield();
    //Serial.println("MotorShield Found!");
    fineFilmControl = AFMS.getStepper(stepperM_total_steps, stepperM_pin);
    //Serial.println("Stepper Found!");
    coarseFilmControl = AFMS.getMotor(film_dcM_pin);
    //Serial.println("DC Motors Found!");
    eraserControl = AFMS.getMotor(eraser_controlM_pin);
    //Serial.println("Eraser Found!");
    eraserActuation.attach(eraser_actuationM_pin);
    eraserActuation.write(eraser_actuationM_max);
    delay(300);
    //Serial.println("Eraser acuation home!");
    drawingActuation.attach(draw_actuation_servoM_pin);
    drawingActuation.write(marker_up_posi);
    delay(300);
    //Serial.println("Drawing acuation home!");
    drawingControl.attach(draw_control_servoM_pin);
    drawingControl.write(head_min);
    delay(300);
    //Serial.println("Drawing control home!");
    AFMS.begin();
    //Serial.println("Initiation Successful!");
  }

  void TM_Motor_Movement::moveFilmForward() {
    // Method to move the film forward by a small increment for drawing symbols

    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(stepperM_move_steps, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
    // Serial.println("Film Forward!");
  }

  void TM_Motor_Movement::moveFilmBackward() {
    // Method to move the film forward by a small increment for drawing symbols

    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(stepperM_move_steps, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0); 
    delay(500);
    // Serial.println("Film Backward!");
  }

  void TM_Motor_Movement::moveOneBitForward() {
    // Methed to advance the film a forward by a defined spacing for each bit

    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(bit_spacing, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
  }

  void TM_Motor_Movement::moveOneSymbolForward() {
    // Method to advance the film forward by one symbol

    moveOneBitForward();
    delay(50);
    moveOneBitForward();
    delay(50);
    moveOneBitForward();
    delay(50);
  }

  void TM_Motor_Movement::moveOneBitBackward() {
    // Methed to advance the film a backward by a defined spacing for each bit

    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(bit_spacing, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
    delay(500);
  }

  void TM_Motor_Movement::moveOneSymbolBackward() {
    // Method to advance the film forward by one symbol

    moveOneBitBackward();
    delay(50);
    moveOneBitBackward();
    delay(50);
    moveOneBitBackward();
    delay(50);
  }

  void TM_Motor_Movement::eraserDown() {
    // Method to lower the eraser down onto the film

    //eraserActuation.write(eraser_actuationM_min);
    // Serial.println("Eraser Down!");
    for (int i = eraser_actuationM_min; i <= eraser_actuationM_max; i +=3) {
      eraserActuation.write(i);
      delay(20);
    } 
    //Serial.println("Eraser Down!");       
  }

  void TM_Motor_Movement::eraserUp() {
    // Method to raise the eraser up off the fiml

    //eraserActuation.write(eraser_actuationM_max);
    for (int i = eraser_actuationM_max; i >= eraser_actuationM_min; i -=3) {
      eraserActuation.write(i);
      delay(20);
    }    
    //Serial.println("Eraser Up!");

  }

  void TM_Motor_Movement::eraserOn() {
    // Method to start the DC motor that controls the eraser

    eraserControl->setSpeed(eraserM_speed);
    eraserControl->run(FORWARD);
    // Serial.println("Eraser on!");
  }

  void TM_Motor_Movement::eraserOff() {
    // Method to stop the DC motor that controls the eraser

    eraserControl->setSpeed(0);
    // Serial.println("Eraser off!");
    }

  void TM_Motor_Movement::moveToErase(){
    // Method to move the film so that a bit under the camera moves to under
    // the eraser

    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(eraserM_head_distance, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0); 
    delay(500);    
  }

  void TM_Motor_Movement::eraseBackward() {
    // Method to actuate the eraser, start the motor, and move the film
    // backward so that one symbol gets erased

    fineFilmControl->setSpeed(2);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(BACKWARD);
    fineFilmControl->step(eraserM_distance, BACKWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);
  }
  void TM_Motor_Movement::eraserToWrite() {
    // Method to move the film to under the writing head after being erased

    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(eraserM_to_write_dist, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);   
  }


  void TM_Motor_Movement::eraseOneSymbol() {
    // Method to erase one symbol by having it start with the third bit
    // of the symbol under the camera and end with the position for the
    // first bit under the writing head so that the new symbol can be
    // drawn

    moveToErase();
    delay(500);
    eraserDown();
    delay(500);
    eraserOn();
    delay(500);
    eraseBackward();
    eraserOff();
    delay(500);
    eraserUp();
    delay(500);
    eraserToWrite();
} 

  void TM_Motor_Movement::eraseAll() {
    // Method to erase all symbols on the film. This just moves
    // the film large distances in both directions while the 
    // eraser is actuated

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
    // Method to move the writign head perpendicular to the
    // films travel and away from the writing heads start position

    for (int i = head_min; i <= head_max; i +=3) {
      drawingControl.write(i);
      delay(20);
    }
  

    //drawingControl.write(head_max);
    delay(500);
    // Serial.println("Positive Line!");
  }

  void TM_Motor_Movement::headNegativeVerticalLine() {
    // Method to move the writign head perpendicular to the
    // films travel and toward from the writing heads start position

    for (int i = head_max; i >= head_min; i-=3) {
      drawingControl.write(i);
      delay(20);
    }
    //drawingControl.write(head_min);
    delay(500);
    // Serial.println("Negative Line!");
  }




  void TM_Motor_Movement::markerDown() {
    // Method to move the down to touch the film

    for (int i = marker_up_posi; i >= marker_down_posi; i -=3) {
      drawingActuation.write(i);
      delay(20);
    }
    delay(500);
    //drawingActuation.write(marker_down_posi);
    // Serial.println("Marker Down!");
  }

  void TM_Motor_Movement::markerUp() {
    // Method to lift the marker up way from the film
    for (int i = marker_down_posi; i <= marker_up_posi; i +=3) {
      drawingActuation.write(i);
      delay(20);
    }
    delay(500);
    //drawingActuation.write(marker_up_posi);

    // Serial.println("Marker Up!");
  }



  void TM_Motor_Movement::drawBitOne() {
    // Method to draw the bit "one"

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
    // Method to draw the bit "zero"

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
    // Method to draw the symbol "one"

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
    // Method to draw the symbol "zero"

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
    // Method to draw the symbol "x"

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
    // Method to draw the symbol "y"

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
    // Method to draw the symbol "blank"
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
    // Method to draw the symbol "hash"
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
    // Method to draw the starting string on the film

   for (int i = 0; i <= start_bitstring.length()-1; i++) {
    //Serial.println(start_bitstring[i]);
    //Serial.println(start_bitstring[i] == '0');
    if (start_bitstring[i] == '0') {
      // Serial.println("Drawing Zero!");
      drawZero();
      delay(500);
       } else {
          // Serial.println("Drawing One!");
          drawOne();
          delay(500);
      }
    }
   }

  void TM_Motor_Movement::goHome() {
    // Method to bring the first bit of the starting string to
    // under the camera

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
    // Method to bring the first bit of the starting string to 
    // under the camera

    goHome();
    delay(2000);
    fineFilmControl->setSpeed(stepperM_speed);
    coarseFilmControl->setSpeed(dcM_film_speed);
    coarseFilmControl->run(FORWARD);
    fineFilmControl->step(write_to_cam, FORWARD, MICROSTEP);
    coarseFilmControl->setSpeed(0);    
  }  

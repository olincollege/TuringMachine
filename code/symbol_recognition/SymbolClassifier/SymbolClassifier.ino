#include "esp_camera.h"
#include "model.h"

#include "esp_camera.h"

#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27

#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22

#define FRAME_SIZE FRAMESIZE_QQVGA
#define WIDTH 160
#define HEIGHT 120
#define BLOCK_SIZE 5
#define W (WIDTH / BLOCK_SIZE)
#define H (HEIGHT / BLOCK_SIZE)
#define THRESHOLD 127

float features[H*W] = { 0 };

Eloquent::ML::Port::RandomForest classifier;

void setup() {
  Serial.begin(115200);
  delay(1000); // Allow time for serial monitor to open
  Serial.println(setup_camera(FRAME_SIZE) ? "Camera Initialized" : "Camera Initialization Failed");
  delay(2000); // Allow time for the camera to stabilize before attempting capture
}
void loop() {
  if (!capture_still()) {
    Serial.println("Failed to capture");
    delay(2000);
    return;
  }
  delay(3000);
}

bool setup_camera(framesize_t frameSize) {
    camera_config_t config;

    config.ledc_channel = LEDC_CHANNEL_0;
    config.ledc_timer = LEDC_TIMER_0;
    config.pin_d0 = Y2_GPIO_NUM;
    config.pin_d1 = Y3_GPIO_NUM;
    config.pin_d2 = Y4_GPIO_NUM;
    config.pin_d3 = Y5_GPIO_NUM;
    config.pin_d4 = Y6_GPIO_NUM;
    config.pin_d5 = Y7_GPIO_NUM;
    config.pin_d6 = Y8_GPIO_NUM;
    config.pin_d7 = Y9_GPIO_NUM;
    config.pin_xclk = XCLK_GPIO_NUM;
    config.pin_pclk = PCLK_GPIO_NUM;
    config.pin_vsync = VSYNC_GPIO_NUM;
    config.pin_href = HREF_GPIO_NUM;
    config.pin_sscb_sda = SIOD_GPIO_NUM;
    config.pin_sscb_scl = SIOC_GPIO_NUM;
    config.pin_pwdn = PWDN_GPIO_NUM;
    config.pin_reset = RESET_GPIO_NUM;
    config.xclk_freq_hz = 20000000;
    config.pixel_format = PIXFORMAT_GRAYSCALE;
    config.frame_size = frameSize;
    config.jpeg_quality = 12;
    config.fb_count = 1;

    bool ok = esp_camera_init(&config) == ESP_OK;

    sensor_t *sensor = esp_camera_sensor_get();
    sensor->set_framesize(sensor, frameSize);

    return ok;
}
bool capture_still() {
  camera_fb_t *frame = esp_camera_fb_get();

  if (!frame) {
    Serial.println("Failed to capture image");
    return false;
  }

  // Reset all the features
  for (size_t i = 0; i < H * W; i++)
    features[i] = 0;

  // For each pixel, compute the position in the downsampled image
  for (size_t i = 0; i < frame->len; i++) {
    const uint16_t x = i % WIDTH;
    const uint16_t y = i / WIDTH;
    const uint8_t block_x = x / BLOCK_SIZE;
    const uint8_t block_y = y / BLOCK_SIZE;
    const uint16_t j = block_y * W + block_x;

    // Compute features by averaging pixel values
    features[j] += frame->buf[i];
  }

  classify();

  esp_camera_fb_return(frame); // Free frame buffer memory after processing

  return true;
}

void classify() {
  Serial.println(classifier.predictLabel(features));
}

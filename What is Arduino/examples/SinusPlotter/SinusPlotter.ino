// Sine wave generation for Serial Plotter
const float pi        = 3.14159265;
const float frequency = 1.0;      // Frequency in Hz
const int offset      = 512;      // Offset for ADC range (if needed)
const int amplitude   = 100;      // Amplitude of sine wave
const int points      = 100;      // Number of points per wave cycle
const int interval    = 10;       // Delay in ms (adjust for speed)

unsigned long lastMillis = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  static int i = 0;
  // Time-based delay
  if (millis() - lastMillis >= interval) {
    lastMillis = millis();
    // Calculate sine value
    float angle = 2 * pi * i / points;
    float value = amplitude * sin(angle) + offset;
    // Print to Serial Plotter
    Serial.println(value);
    // Increment angle index
    i++;
    if (i >= points) {
      i = 0;
    }
  }
}

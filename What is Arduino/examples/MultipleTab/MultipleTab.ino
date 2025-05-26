int cntLed = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  static int iKe = 0;
  if (iKe++ > 100) iKe = 0;
  //------------------------
  SERIAL_Send(iKe);
  LED_OnOff(500);
  cntLed++;
}

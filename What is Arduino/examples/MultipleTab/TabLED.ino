

void LED_OnOff(unsigned long _iDelay)
{
  cntLed++;
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(_iDelay);                   // wait for delay mS
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(_iDelay);                   // wait for 500 mS
}
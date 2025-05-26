
void SERIAL_Send(int _iCount)
{
  char buffer[14];  // 13 digits + null terminator
  sprintf(buffer, "%03d: sending.", _iCount);  // Format with leading zeros
  Serial.println(buffer);
}
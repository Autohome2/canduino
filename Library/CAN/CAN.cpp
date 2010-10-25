#include <CAN.h>
#include <SPI.h>
CANClass can;//create can object

void CANClass::bps(byte config1, byte config2, byte config3)//sets bitrate for CAN node
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer(WRITE);
  SPI.transfer(CNF0);
  SPI.transfer(config1);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);

  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer(WRITE);
  SPI.transfer(CNF1);
  SPI.transfer(config2);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);

  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer(WRITE);
  SPI.transfer(CNF2);
  SPI.transfer(config3);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

void CANClass::send_0()//transmits buffer 0
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

void CANClass::send_1()//transmits buffer 1
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

void CANClass::send_2()//transmits buffer 2
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

byte CANClass::readID_0()//reads ID in recieve buffer 0
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(0xFF);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

byte CANClass::readID_1()//reads ID in reciever buffer 1
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(0xFF);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

byte CANClass::readDATA_0()//reads DATA in recieve buffer 0
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(0xFF);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

byte CANClass::readDATA_1()//reads data in recieve buffer 1
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(0xFF);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

void CANClass::load_0(byte identifier, byte data)//loads ID and DATA into transmit buffer 0
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(identifier);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);

  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(data);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

void CANClass::load_1(byte identifier, byte data)//loads ID and DATA into transmit buffer 1
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(identifier);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);

  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(data);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}

void CANClass::load_2(byte identifier, byte data)//loads ID and DATA into transmit buffer 2
{
  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(identifier);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);

  digitalWrite(ss, LOW);
  delay(10);
  SPI.transfer();
  SPI.transfer(data);
  delay(10);
  digitalWrite(ss, HIGH);
  delay(10);
}
#include <AFMotor.h>                 //Include library AF Motor
AF_DCMotor motor1(1);                // Motor 1 Izquierdo
AF_DCMotor motor1(2);                // Motor 2 Derecho
unsigned char velocidade1 = 0x00;    // Storage motor1 Speed (8 bits)

void setup()
{
}


void loop()
{


preformMove();


  velocidade1 = 0xFF;
  motor1.setSpeed(velocidade1);  // Set full Speed
  motor1.run(FORWARD);           // Clockwise
  delay(2000);                   // Wait 2 seconds


}


public char irDirection(){
//switch 

	return direcction
}

public void preformMove(char d, int grados){


}



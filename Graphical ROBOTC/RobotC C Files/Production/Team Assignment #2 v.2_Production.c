#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port3,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Sensor, port4,  gyroSensor,     sensorVexIQ_Gyro)
#pragma config(Sensor, port7,  distanceMM,     sensorVexIQ_Distance)
#pragma config(Sensor, port8,  bumpSwitch,     sensorVexIQ_Touch)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor11,         clawMotor,     tmotorVexIQ, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


task main()
{
	// Assignment #2 Spiral
	turnRight(3, rotations, 50);
	repeat (4) {
		forward(90, degrees, 50);
		turnRight(75, degrees, 50);
	}
	repeat (6) {
		forward(140, degrees, 50);
		turnRight(75, degrees, 50);
	}
	repeat (8) {
		forward(200, degrees, 50);
		turnRight(75, degrees, 50);
	}
	repeat (10) {
		forward(270, degrees, 50);
		turnRight(75, degrees, 50);
	}
	repeat (12) {
		forward(350, degrees, 50);
		turnRight(75, degrees, 50);
	}
	repeat (14) {
		forward(440, degrees, 50);
		turnRight(75, degrees, 50);
	}
}

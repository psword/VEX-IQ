<Version>1.0.1</Version>

<VariableList>
    <Variable>eteen</Variable>
    <Variable>starting_acceleration</Variable>
</VariableList>

<ProgrammingBlock type="comment">Assignment #1 Accelerate</ProgrammingBlock>

<ProgrammingBlock type="comment" commented="1">Acceleration</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">00</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">10</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">20</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">30</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">5</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">40</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">60</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">70</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">80</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">90</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="functionCall" function="playSound">
    <Parameters>
        <Parameter name="sound" type="base typedef" typeDef="TSounds">soundSiren2</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Deceleration</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">90</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">80</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">70</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">60</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">40</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">30</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">20</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">10</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">00</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="functionCall" function="playSound">
    <Parameters>
        <Parameter name="sound" type="base typedef" typeDef="TSounds">soundTada</Parameter>
    </Parameters>
</ProgrammingBlock>

<RobotConfiguration>#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port3,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Sensor, port4,  gyroSensor,     sensorVexIQ_Gyro)
#pragma config(Sensor, port7,  distanceMM,     sensorVexIQ_Distance)
#pragma config(Sensor, port8,  bumpSwitch,     sensorVexIQ_Touch)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor11,         clawMotor,     tmotorVexIQ, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
</RobotConfiguration>

<CSource>#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port3,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Sensor, port4,  gyroSensor,     sensorVexIQ_Gyro)
#pragma config(Sensor, port7,  distanceMM,     sensorVexIQ_Distance)
#pragma config(Sensor, port8,  bumpSwitch,     sensorVexIQ_Touch)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,  motor11,         clawMotor,     tmotorVexIQ, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


float eteen;
float starting_acceleration;


task main()
{
	// Assignment #1 Accelerate
	//// Acceleration
	repeat (4) {
		forward(90, degrees, 00);
	}
	repeat (4) {
		forward(90, degrees, 10);
	}
	repeat (4) {
		forward(90, degrees, 20);
	}
	repeat (4) {
		forward(90, degrees, 30);
	}
	repeat (5) {
		forward(90, degrees, 40);
	}
	repeat (4) {
		forward(90, degrees, 50);
	}
	repeat (4) {
		forward(90, degrees, 60);
	}
	repeat (4) {
		forward(90, degrees, 70);
	}
	repeat (4) {
		forward(90, degrees, 80);
	}
	repeat (4) {
		forward(90, degrees, 90);
	}
	repeat (4) {
		forward(90, degrees, 100);
	}
	playSound(soundSiren2);
	// Deceleration
	repeat (1) {
		forward(90, degrees, 90);
	}
	repeat (1) {
		forward(90, degrees, 80);
	}
	repeat (1) {
		forward(90, degrees, 70);
	}
	repeat (1) {
		forward(90, degrees, 60);
	}
	repeat (1) {
		forward(90, degrees, 50);
	}
	repeat (1) {
		forward(90, degrees, 40);
	}
	repeat (1) {
		forward(90, degrees, 30);
	}
	repeat (1) {
		forward(90, degrees, 20);
	}
	repeat (1) {
		forward(90, degrees, 10);
	}
	repeat (1) {
		forward(90, degrees, 00);
	}
	playSound(soundTada);
}
</CSource>

<Version>1.0.1</Version>

<VariableList>
    <Variable>vari</Variable>
</VariableList>

<ProgrammingBlock type="functionCall" function="resetTimer">
    <Parameters>
        <Parameter name="currentTimer" type="base typedef" default="T1" typeDef="TTimers">T1</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="RepeatUntil">
    <Parameters>
        <Parameter name="LHS" type="typedef">getTimer(T1, seconds)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="long">120</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorNone</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="short" typeDef="TSimpleColors">0</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Red</ProgrammingBlock>

<ProgrammingBlock type="comment">Red detector (red is 0)</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorRed</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">5</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="playSound">
    <Parameters>
        <Parameter name="sound" type="base typedef" typeDef="TSounds">soundTada</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorLimeGreen</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&gt;</Parameter>
        <Parameter name="RHS" type="short" typeDef="TSimpleColors">90</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Blue</ProgrammingBlock>

<ProgrammingBlock type="comment">Blue detector (blue is 210) </ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorBlue</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">5</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="playSound">
    <Parameters>
        <Parameter name="sound" type="base typedef" typeDef="TSounds">soundTada</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorLimeGreen</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Play sound</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="stopAllMotors"/>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">4</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="playSound">
    <Parameters>
        <Parameter name="sound" type="base typedef" typeDef="TSounds">soundRatchet4</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="RepeatForever"/>

<ProgrammingBlock type="end"/>

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


float vari;


task main()
{
	resetTimer(T1);
	repeatUntil (getTimer(T1, seconds) == 120) {
		setTouchLEDColor(touchLED, colorNone);
		if (getColorHue(colorDetector) == 0) {
			// Set the LED to Red
			// Red detector (red is 0)
			setTouchLEDColor(touchLED, colorRed);
			wait(5, seconds);
			playSound(soundTada);
			setTouchLEDColor(touchLED, colorLimeGreen);
		}
		if (getColorHue(colorDetector) &gt; 90) {
			// Set the LED to Blue
			// Blue detector (blue is 210) 
			setTouchLEDColor(touchLED, colorBlue);
			wait(5, seconds);
			playSound(soundTada);
			setTouchLEDColor(touchLED, colorLimeGreen);
		}
		// Play sound
		stopAllMotors();
		wait(4, seconds);
		playSound(soundRatchet4);
	}
	repeat (forever) {
	}
}
</CSource>

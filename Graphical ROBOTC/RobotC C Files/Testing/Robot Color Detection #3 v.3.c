<Version>1.0.1</Version>

<VariableList>
    <Variable>vari</Variable>
</VariableList>

<ProgrammingBlock type="loop" loopType="Repeat">
    <Parameters>
        <Parameter name="Count" type="long">25</Parameter>
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
        <Parameter name="operator" type="typedef">&lt;</Parameter>
        <Parameter name="RHS" type="short" typeDef="TSimpleColors">20</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="displaySensorValues">
    <Parameters>
        <Parameter name="lineNumber" type="base typedef" default="line1" typeDef="tIQLCDLine">line1</Parameter>
        <Parameter name="nDeviceIndex" type="base typedef" default="port1" typeDef="tSensors">colorDetector</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Red</ProgrammingBlock>

<ProgrammingBlock type="comment">Red detector (red is &lt; 20)</ProgrammingBlock>

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
        <Parameter name="RHS" type="short" typeDef="TSimpleColors">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Blue</ProgrammingBlock>

<ProgrammingBlock type="comment">Blue detector (blue is &gt; 100) </ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="displaySensorValues">
    <Parameters>
        <Parameter name="lineNumber" type="base typedef" default="line1" typeDef="tIQLCDLine">line1</Parameter>
        <Parameter name="nDeviceIndex" type="base typedef" default="port1" typeDef="tSensors">colorDetector</Parameter>
    </Parameters>
</ProgrammingBlock>

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
	repeat (25) {
		setTouchLEDColor(touchLED, colorNone);
		if (getColorHue(colorDetector) &lt; 20) {
			displaySensorValues(line1, colorDetector);
			// Set the LED to Red
			// Red detector (red is &lt; 20)
			setTouchLEDColor(touchLED, colorRed);
			wait(5, seconds);
			playSound(soundTada);
			setTouchLEDColor(touchLED, colorLimeGreen);
		}
		if (getColorHue(colorDetector) &gt; 100) {
			// Set the LED to Blue
			// Blue detector (blue is &gt; 100) 
			displaySensorValues(line1, colorDetector);
			setTouchLEDColor(touchLED, colorBlue);
			wait(5, seconds);
			playSound(soundTada);
			setTouchLEDColor(touchLED, colorLimeGreen);
		}
		// Play sound
		wait(4, seconds);
		playSound(soundRatchet4);
	}
}
</CSource>

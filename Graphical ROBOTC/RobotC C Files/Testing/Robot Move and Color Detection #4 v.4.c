<Version>1.0.1</Version>

<VariableList>
    <Variable>vari</Variable>
</VariableList>

<ProgrammingBlock type="functionCall" function="resetGyro">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">gyroSensor</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="resetMotorEncoder">
    <Parameters>
        <Parameter name="nMotorIndex" type="base typedef" typeDef="tMotor">armMotor</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Lift up the arm and claw</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-50</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">80</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Begin forward movement at half speed</ProgrammingBlock>

<ProgrammingBlock type="comment">Poll for the bump value while moving &amp; stop when true</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="RepeatUntil">
    <Parameters>
        <Parameter name="LHS" type="typedef">getBumperValue(bumpSwitch)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="float">true</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">2</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">75</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Move backwards</ProgrammingBlock>

<ProgrammingBlock type="functionCall" commented="1" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.66</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" commented="1" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-499</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Red detector (red is 0)</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&lt;=</Parameter>
        <Parameter name="RHS" type="float">30</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backwards</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.66</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-499</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Red</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">2</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorRed</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.50</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.70</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Polling for bump sequence</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="RepeatUntil">
    <Parameters>
        <Parameter name="LHS" type="typedef">getBumperValue(bumpSwitch)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="float">true</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Move backward 1 rotation</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.5</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Manipulate arm and claw motor</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-100</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">250</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backward 1 rotation</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.75</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Turning right</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.72</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Moving forward</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.0</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Blue detector (blue is above 100) </ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&gt;=</Parameter>
        <Parameter name="RHS" type="short">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&lt;</Parameter>
        <Parameter name="RHS" type="short">180</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backwards</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.66</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-499</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Blue</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">2</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorBlue</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.50</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.75</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnLeft">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.70</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Polling for bump sequence</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="RepeatUntil">
    <Parameters>
        <Parameter name="LHS" type="typedef">getBumperValue(bumpSwitch)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="bool" typeDef="bool">true</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Move backward 1 rotation</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.5</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Manipulate arm and claw motor</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-100</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">250</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backward 1 rotation</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.75</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Turning right</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnLeft">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.72</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Moving forward</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.0</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Other colors</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&gt;</Parameter>
        <Parameter name="RHS" type="short">30</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&lt;</Parameter>
        <Parameter name="RHS" type="short">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backwards</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.00</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-499</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Green</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">2</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorGreen</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.75</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.5</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Polling for bump sequence</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="RepeatUntil">
    <Parameters>
        <Parameter name="LHS" type="typedef">getBumperValue(bumpSwitch)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="bool" typeDef="bool">true</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Move backward 1 rotation</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.5</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Manipulate arm and claw motor</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-100</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">250</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backward 1 rotation</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.70</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Turning right</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.4</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Moving forward</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.50</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="loop" loopType="IfOnly">
    <Parameters>
        <Parameter name="LHS" type="typedef">getColorHue(colorDetector)</Parameter>
        <Parameter name="operator" type="typedef">&gt;</Parameter>
        <Parameter name="RHS" type="short">180</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Move backwards</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.66</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-499</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Set the LED to Green</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">2</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="setTouchLEDColor">
    <Parameters>
        <Parameter name="nDeviceIndex" type="base typedef" typeDef="tSensors">touchLED</Parameter>
        <Parameter name="nColor" type="base typedef" typeDef="TSimpleColors">colorGreen</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">90</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">.50</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">25</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="wait">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="seconds" typeDef="tMovementUnits">seconds</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">0.70</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Polling for bump sequence</ProgrammingBlock>

<ProgrammingBlock type="loop" loopType="RepeatUntil">
    <Parameters>
        <Parameter name="LHS" type="typedef">getBumperValue(bumpSwitch)</Parameter>
        <Parameter name="operator" type="typedef">==</Parameter>
        <Parameter name="RHS" type="bool" typeDef="bool">true</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Move backward 4 rotations</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="backward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">4.0</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Turning right</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.00</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Manipulate arm and claw motor</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-500</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">clawMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">-100</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="moveMotor">
    <Parameters>
        <Parameter name="motorPort" type="base typedef" default="motor10" typeDef="tMotor">armMotor</Parameter>
        <Parameter name="quantity" type="float" default="1">250</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">degrees</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Turning right</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="turnRight">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.00</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">100</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="comment">Moving forward</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="forward">
    <Parameters>
        <Parameter name="quantity" type="float" default="1">1.0</Parameter>
        <Parameter name="unitType" type="base typedef" default="rotations" typeDef="tMovementUnits">rotations</Parameter>
        <Parameter name="speed" type="short" default="50">50</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="end"/>

<ProgrammingBlock type="comment">Play sound</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="playSound">
    <Parameters>
        <Parameter name="sound" type="base typedef" typeDef="TSounds">soundTada</Parameter>
    </Parameters>
</ProgrammingBlock>

<ProgrammingBlock type="functionCall" function="stopAllMotors"/>

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
	resetGyro(gyroSensor);
	resetMotorEncoder(armMotor);
	// Lift up the arm and claw
	moveMotor(clawMotor, -50, degrees, 50);
	moveMotor(armMotor, 500, degrees, 80);
	// Begin forward movement at half speed
	// Poll for the bump value while moving &amp; stop when true
	repeatUntil (getBumperValue(bumpSwitch) == true) {
		forward(2, rotations, 75);
	}
	// Move backwards
	//backward(.66, rotations, 25);
	//moveMotor(armMotor, -499, degrees, 25);
	// Red detector (red is 0)
	if (getColorHue(colorDetector) &lt;= 30) {
		// Move backwards
		backward(.66, rotations, 25);
		moveMotor(armMotor, -499, degrees, 25);
		// Set the LED to Red
		wait(2, seconds);
		setTouchLEDColor(touchLED, colorRed);
		moveMotor(clawMotor, 90, degrees, 100);
		forward(.50, rotations, 50);
		backward(1, rotations, 50);
		moveMotor(armMotor, 500, degrees, 25);
		wait(1, seconds);
		turnRight(0.70, rotations, 50);
		// Polling for bump sequence
		repeatUntil (getBumperValue(bumpSwitch) == true) {
			forward(1, rotations, 50);
		}
		// Move backward 1 rotation
		backward(1.5, rotations, 50);
		// Manipulate arm and claw motor
		moveMotor(armMotor, -500, degrees, 100);
		moveMotor(clawMotor, -100, degrees, 50);
		moveMotor(armMotor, 250, degrees, 50);
		// Move backward 1 rotation
		backward(0.75, rotations, 100);
		// Turning right
		turnRight(0.72, rotations, 100);
		// Moving forward
		forward(1.0, rotations, 50);
	}
	// Blue detector (blue is above 100) 
	if (getColorHue(colorDetector) &gt;= 100) {
		if (getColorHue(colorDetector) &lt; 180) {
			// Move backwards
			backward(.66, rotations, 25);
			moveMotor(armMotor, -499, degrees, 25);
			// Set the LED to Blue
			wait(2, seconds);
			setTouchLEDColor(touchLED, colorBlue);
			moveMotor(clawMotor, 90, degrees, 100);
			forward(.50, rotations, 50);
			backward(.75, rotations, 50);
			moveMotor(armMotor, 500, degrees, 25);
			wait(1, seconds);
			turnLeft(0.70, rotations, 50);
			// Polling for bump sequence
			repeatUntil (getBumperValue(bumpSwitch) == true) {
				forward(1, rotations, 50);
			}
			// Move backward 1 rotation
			backward(1.5, rotations, 50);
			// Manipulate arm and claw motor
			moveMotor(armMotor, -500, degrees, 100);
			moveMotor(clawMotor, -100, degrees, 50);
			moveMotor(armMotor, 250, degrees, 50);
			// Move backward 1 rotation
			backward(0.75, rotations, 50);
			// Turning right
			turnLeft(0.72, rotations, 50);
			// Moving forward
			forward(1.0, rotations, 50);
		}
	}
	// Other colors
	if (getColorHue(colorDetector) &gt; 30) {
		if (getColorHue(colorDetector) &lt; 100) {
			// Move backwards
			backward(1.00, rotations, 25);
			moveMotor(armMotor, -499, degrees, 25);
			// Set the LED to Green
			wait(2, seconds);
			setTouchLEDColor(touchLED, colorGreen);
			backward(0.75, rotations, 50);
			moveMotor(clawMotor, 90, degrees, 100);
			moveMotor(armMotor, 500, degrees, 25);
			wait(1, seconds);
			turnRight(1.5, rotations, 50);
			// Polling for bump sequence
			repeatUntil (getBumperValue(bumpSwitch) == true) {
				forward(1, rotations, 50);
			}
			// Move backward 1 rotation
			backward(1.5, rotations, 50);
			// Manipulate arm and claw motor
			moveMotor(armMotor, -500, degrees, 100);
			moveMotor(clawMotor, -100, degrees, 50);
			moveMotor(armMotor, 250, degrees, 50);
			// Move backward 1 rotation
			backward(0.70, rotations, 100);
			// Turning right
			turnRight(1.4, rotations, 100);
			// Moving forward
			forward(0.50, rotations, 50);
		}
	}
	if (getColorHue(colorDetector) &gt; 180) {
		// Move backwards
		backward(.66, rotations, 25);
		moveMotor(armMotor, -499, degrees, 25);
		// Set the LED to Green
		wait(2, seconds);
		setTouchLEDColor(touchLED, colorGreen);
		moveMotor(clawMotor, 90, degrees, 100);
		forward(.50, rotations, 50);
		backward(1, rotations, 50);
		moveMotor(armMotor, 500, degrees, 25);
		wait(1, seconds);
		turnRight(0.70, rotations, 50);
		// Polling for bump sequence
		repeatUntil (getBumperValue(bumpSwitch) == true) {
			forward(1, rotations, 50);
		}
		// Move backward 4 rotations
		backward(4.0, rotations, 50);
		// Turning right
		turnRight(1.00, rotations, 100);
		// Manipulate arm and claw motor
		moveMotor(armMotor, -500, degrees, 100);
		moveMotor(clawMotor, -100, degrees, 50);
		moveMotor(armMotor, 250, degrees, 50);
		// Turning right
		turnRight(1.00, rotations, 100);
		// Moving forward
		forward(1.0, rotations, 50);
	}
	// Play sound
	playSound(soundTada);
	stopAllMotors();
}
</CSource>

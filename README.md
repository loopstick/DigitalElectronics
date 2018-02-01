# Digital Electronics
Jillian

## Week 2

### Arduino project
#### Controlling the computer with hand gestures using Arduino 
Link: https://circuitdigest.com/microcontroller-projects/control-your-computer-with-hand-gestures<br />
      
This project is about building a gesture control feature on a computer with Arduino and Python.<br />
Two Ultrasonic distance sensors are placed on top of the monitor and reads the distance between the<br /> 
monitor and the user's hand using Arduino, based on this value of distance certain actions will be<br />
performed by the python program.<br />
For example:<br />
      Action 1: When both the hands are placed up before the sensor at a particular far distance then<br /> 
                the video in VLC player should Play/Pause.<br />
      Action 2: When right hand is placed up before the sensor at a particular far distance then the<br /> 
                video should Fast Forward one step.<br />
      Action 3: When left hand is placed up before the sensor at a particular far distance then the<br /> 
                video should Rewind one step.<br />
      Action 4: When right hand is placed up before the sensor at a particular near distance and then<br /> 
                if moved towards the sensor the video should fast forward and if moved away the video<br /> 
                should Rewind.<br />
      Action 5: When left hand is placed up before the sensor at a particular near distance and then if<br /> 
                moved towards the sensor the volume of video should increase and if moved away the volume<br /> 
                should Decrease.<br />

### Sensors
#### Tilt sensors
Detect orientation & inclination<br />
Small, low-power<br />
When the end with two poles is downwards - the mass shorts the poles<br />
Poles pointing up - open loop<br />
Poles pointing down - closed (low resistance/continuous)<br />
Connecting - avoid bending the leads too much<br />
      
#### Photocells
Detect light<br />
Small, low-power, don't wear out<br />
AKA: CdS cells, LDR (light-dependent resistors), photoresistors<br />
Changes resistive value depending on how much light is shining into the face<br />
Very inaccurate<br />
Tend to be sensitive to light between 700nm (red) to 500nm (green)<br />
Non-polarized (basically resistors)<br />
Avoid bending the leads right at the epoxied sersor<br />
Pull-down-resistor = squareroot(Rmin*Rmax)<br />

#### PIR Motion Sensor
Detect whether a human has moved in or out of the sensor's range<br />
Small, low-power, don't wear out<br />
AKA: "Passive Infrared", "Pyroelectric", “IR motion" sensors<br />
Pyroelectric sensor - detect levels of infrared radiation<br />
The hotter something is, the more radiation is emitted<br />
Good for detecting when a person has left or entered the area, or has approached<br />
Two slots sensitive to IR<br />
      Person passes by - intercepts one half of the PIR sensor - positive differential change between the two<br />
      halves<br />
      Warm body leaves - reverse - negative differential change<br />
Silicon window<br />
Lenses - change the breadth, range & sensing pattern<br />
Split into multiple section - fresnel lens<br />
Red cable - +voltage power<br />
Black cable - ground power<br />
Yellow cable - signal out<br />

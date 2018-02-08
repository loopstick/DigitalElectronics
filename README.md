# Digital Electronics
Jillian

## Week 2

### Arduino project
#### Controlling the computer with hand gestures using Arduino 
Link: https://circuitdigest.com/microcontroller-projects/control-your-computer-with-hand-gestures
      
      This project is about building a gesture control feature on a computer with Arduino and Python. Two Ultrasonic distance sensors
      are placed on top of the monitor and reads the distance between the monitor and the user's hand using Arduino, based on this 
      value of distance certain actions will be performed by the python program.
      For example:
            Action 1: When both the hands are placed up before the sensor at a particular far distance then the video in VLC player
                      should Play/Pause.
            Action 2: When right hand is placed up before the sensor at a particular far distance then the video should Fast Forward 
                      one step.
            Action 3: When left hand is placed up before the sensor at a particular far distance then the video should Rewind one 
                      step.
            Action 4: When right hand is placed up before the sensor at a particular near distance and then if moved towards the
                      sensor the video should fast forward and if moved away the video should Rewind.
            Action 5: When left hand is placed up before the sensor at a particular near distance and then if moved towards the 
                      sensor the volume of video should increase and if moved away the volume should Decrease.

### Sensors
#### Tilt sensors
      Detect orientation & inclination
      Small, low-power
      When the end with two poles is downwards - the mass shorts the poles
      Poles pointing up - open loop
      Poles pointing down - closed (low resistance/continuous)
      Connecting - avoid bending the leads too much
      
#### Photocells
      Detect light
      Small, low-power, don't wear out
      AKA: CdS cells, LDR (light-dependent resistors), photoresistors
      Changes resistive value depending on how much light is shining into the face
      Very inaccurate
      Tend to be sensitive to light between 700nm (red) to 500nm (green)
      Non-polarized (basically resistors)
      Avoid bending the leads right at the epoxied sersor
      Pull-down-resistor = squareroot(Rmin*Rmax)

#### PIR Motion Sensor
      Detect whether a human has moved in or out of the sensor's range
      Small, low-power, don't wear out
      AKA: "Passive Infrared", "Pyroelectric", “IR motion" sensors
      Pyroelectric sensor - detect levels of infrared radiation
      The hotter something is, the more radiation is emitted
      Good for detecting when a person has left or entered the area, or has approached
      Two slots sensitive to IR
            Person passes by - intercepts one half of the PIR sensor - positive differential change between the two
            halves
            Warm body leaves - reverse - negative differential change
      Silicon window
      Lenses - change the breadth, range & sensing pattern
      Split into multiple section - fresnel lens
      Red cable - +voltage power
      Black cable - ground power
      Yellow cable - signal out

## Week 3

### Project Proposal

A LED eye that follows the movement of people and tells the time in Morse code.
<html>
<img src = "https://github.com/JinghanLuo/DigitalElectronics/blob/master/sketch.jpg">
</html>
The passive infrared sensors around the eye (LED bulb) will detect people's movement and the front of the eye will turn to the direction in which the movement is detected and change its color every time it turns.</br>
When you touch the eye, the speaker will tell the time in Morse code, and the light will blink accordingly.
<html>
<img src = "https://github.com/JinghanLuo/DigitalElectronics/blob/master/597166811.jpg">
</html>

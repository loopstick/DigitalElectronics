# Sensors
## Tilt sensors
      Detect orientation & inclination
      Small, low-power
      When the end with two poles is downwards - the mass shorts the poles
      Poles pointing up - open loop;
      Poles pointing down - closed (low resistance/continuous)
      Connecting - avoid bending the leads too much
      
## Photocells
      Detect light
      Small, low-power, don't wear out
      AKA: CdS cells, LDR (light-dependent resistors), photoresistors
      Changes resistive value depending on how much light is shining into the face
      Very inaccurate
      Tend to be sensitive to light between 700nm (red) to 500nm (green)
      Non-polarized (basically resistors)
      Avoid bending the leads right at the epoxied sersor
      Pull-down-resistor = squareroot(Rmin*Rmax)

## PIR Motion Sensor
      Detect whether a human has moved in or out of the sensor's range
      Small, low-power, don't wear out
      AKA: "Passive Infrared", "Pyroelectric", “IR motion" sensors
      Pyroelectric sensor - detect levels of infrared radiation
      The hotter something is, the more radiation is emitted
      Good for detecting when a person has left or entered the area, or has approached
      Two slots sensitive to IR
            Person passes by - intercepts one half of the PIR sensor - positive differential change between the two halves
            Warm body leaves - reverse - negative differential change
      Silicon window
      Lenses - change the breadth, range & sensing pattern
      Split into multiple section - fresnel lens
      Red cable - +voltage power
      Black cable - ground power
      Yellow cable - signal out

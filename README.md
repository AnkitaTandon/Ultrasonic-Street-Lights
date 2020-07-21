# Ultrasonic-Street-Lights
IoT

## Requirements
- Arduino UNO
- A Ultrasonic Sensor
- 3 LEDs
- 3 Registers
- Jumper wires (M-M)
- Breadboard (for convenience)

## Software
Arduino application can be downloaded from [here](https://www.arduino.cc/en/main/software)

## Set up
1. Place the LEDs in parallel with one end grounded and the other end connected to a register(250-300 ohm) for quite bright LED.
2. Connect the other end of the registers to arduino ports as mentioned [here](https://github.com/AnkitaTandon/Ultrasonic-Street-Lights/blob/master/street%20lights.ino)
   - Yes, you can choose the ports and number of LEDs as per your choice ;)
3. Now, place the Sensor perpendicular to the leds towards the direction mapping motion and do the connection as shown below
![](https://github.com/AnkitaTandon/Ultrasonic-Street-Lights/blob/master/Sensor-link-arduino.png)
4. At last, [download](https://github.com/AnkitaTandon/Ultrasonic-Street-Lights/blob/master/street%20lights.ino) the code file and upload it on Arduino Application.
5. Don't forget to connect your aduino UNO to your machine with the help of a USB cable. 

## Working
When a considerable size object passes by the street lights, only the leds close to the object glows and turns back off when the object has moved further away.
[Click here for demo](https://github.com/AnkitaTandon/Ultrasonic-Street-Lights/blob/master/VID_20190717_204330.mp4)

## Outcome
The lights brighten up the streets only when necessary, thus saving huge amount from the electricity bills.

## Support
@CodePurble

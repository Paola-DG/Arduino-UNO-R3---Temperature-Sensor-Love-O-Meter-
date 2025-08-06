# Arduino-UNO-R3---Temperature-Sensor-Love-O-Meter-
This is a simple project using an Arduino UNO R3 and a TMP36 temperature sensor to measure temperature based on skin and air contact. The sensor sends out a variable voltage depending on the heat it detects, and the Arduino reads that value using its analog input (ADC).

The result is shown in real time using the Serial Monitor in the Arduino IDE, making it a great hands-on way to explore analog inputs and sensor data.

🔧 What you’ll need:
      * Arduino UNO R3

      * TMP36 temperature sensor

      * Breadboard + jumper wires

      * USB cable + Arduino IDE

📌 How it works:

The TMP36 has three pins: one for power (VCC), one for ground (GND), and one that sends out the temperature as an analog voltage.

The Arduino reads the voltage from the sensor (usually connected to A0) and converts it to a temperature in Celsius.

You can view the values directly in the Serial Monitor.

🎯 Why this project?

It’s a quick and fun way to learn how analog sensors work, and a nice starting point if you’re curious about temperature monitoring, wearables, or even DIY health tech.

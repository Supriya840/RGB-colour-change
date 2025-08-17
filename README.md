Tri- Colour LEDs:

There are two types of RGB led’s; the common cathode one and the common anode one. In the common cathode RGB led, the cathode of all the led’s is common and we give PWM signals to the anode of led’s while in the common anode RGB led, the anode of all the led’s is common and we give PWM signals to the cathode of led’s. The RGB led has one big lead than the other leads. In the common cathode case, it will be connected to GND and in the common anode case; it will be connected to 5V.


Using Arduino Uno connecting 3 potentiometers and RGB LED to port pins of microcontroller. Changing the colour of RGB based on the change in voltage of potentiometers.

STEPS FOR CONNECTION:

Hardware Connections

Potentiometers:

Each potentiometer has 3 pins:

Left pin → GND

Right pin → 5V

Middle pin (Wiper) → Analog pin on Arduino:

Potentiometer	Wiper Pin → Arduino	Left Pin	Right Pin
Red	A0	GND	5V
Green	A2	GND	5V
Blue	A1	GND	5V

RGB LED (Common Cathode)

Make sure your RGB LED is common cathode (GND to the common pin).

LED Pin	Connect To	Resistor
Red	D12	220Ω
Green	D10	220Ω
Blue	D11	220Ω
Common	GND	None

Resistors (220Ω) are connected in series between Arduino pins and RGB LED color pins to limit current.

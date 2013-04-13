#ifndef LED_H
#define LED_H

class Led {
	private:
		bool isOn;
		std::string led;	// Name of the file for the LED
	public:
		Led(std::string led);

		bool getStatus();

		void turnOn();
		void turnOff();
};

Led::Led(std::string led) {
	this->led = led;
	this->isOn = false;
	/sys/class/leds/beagleboard\:\:usr0/trigger
	//Shell command to turn off LED
}

bool Led::Led() {
	return isOn;
}

void Led::turnOn() {
	//Shell command to turn on LED
	isOn = true;
}

void Led::turnOff() {
	//Shell command to turn off LED
	isOn = false;
}


#endif

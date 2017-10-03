#ifndef _GRABBER_H_
#define _GRABBER_H_

class grabber
{
private:
	bool isOpen;
	bool isUp;
	int storage;
public:
	int servoValue;

	// Open and Close control

	void toggleOpenClose(int channel);
	void openClose(int channel, int value);


	// Up and Down control
	
	void toggleUpDown(int channel);
	void upDown(int channel, int value);

};

#endif

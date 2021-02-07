//////////////////////////////////////
//	Caitlin J. Corbin				//
//	January 24, 2021				//
//	M01 Programming Assignment 2	//
//	"Create televisions"			//
//////////////////////////////////////

#include <iostream>

using namespace std;

class Television {
private:
	string manufacturer;
	string model;
	int screenSize;
	float resolution;
	float price;
	string serialNumber;
	string power = "off";
	int channel = 1;
	int volume = 10;
	string color = "black";
	string led = "white light";
public:
	//Television(string manufacturer, string model, int screenSize, float resolution, float price, string serialNumber){
	//	manufacturer = manufacturer;
	//	model = model;
	//	screenSize = screenSize;
	//	resolution = resolution;
	//	price = price;
	//	serialNumber = serialNumber;
	//};
	//~Television() { cout << "Television deconstructor" << endl; };

	// Getters
	string getManufacturer() {
		return manufacturer;
	};
	string getModel() {
		return model;
	};
	int getScreenSize(){
		return screenSize; 
	};
	float getResolution() {
		return resolution;
	};
	float getPrice() {
		return price;
	};
	string getSerialNumber() {
		return serialNumber;
	};
	string getPower() {
		return power;
	};
	int getChannel() {
		return channel;
	};
	int getVolume() {
		return volume;
	};
	string getcolor() {
		return color;
	};
	string getLed() {
		return led;
	};

	// Setters
	void setPower(string x) {
		power = x;
	};
	void setChannel(int x) {
		channel = x;
	};
	void setVolume(int x) {
		volume = x;
	};

	void input() {											// Inputs information into an object
		cout << "Manufacturer: "; cin >> manufacturer;
		cout << "Model: "; cin >> model;
		cout << "ScreenSize: "; cin >> screenSize;
		cout << "Resolution: "; cin >> resolution;
		cout << "Price: "; cin >> price;
		cout << "SerialNumber: "; cin >> serialNumber;
		cout << "Power: "; cin >> power;
		cout << "Channel: "; cin >> channel;
		cout << "Volume: "; cin >> volume;
		cout << "Color: "; cin >> color;
		cout << "Led: "; cin >> led;
	};

	void display() {										// Displays information about an object
		cout << endl;
		cout << "Information" << endl;
		cout << "Manufacturer: "; cout << manufacturer << endl;
		cout << "Model: "; cout << model << endl;
		cout << "ScreenSize: "; cout << screenSize << endl;
		cout << "Resolution: "; cout << resolution << endl;
		cout << "Price: "; cout << price << endl;
		cout << "SerialNumber: "; cout << serialNumber << endl;
		cout << "Power: "; cout << power << endl;
		cout << "Channel: "; cout << channel << endl;
		cout << "Volume: "; cout << volume << endl;
		cout << "Color: "; cout << color << endl;
		cout << "Led: "; cout << led << endl;
	};
};




int main() {
	int i = 0;																// Local Variables
	int tvNum;
	string choice;
	int choice2;
	int answer;


	cout << "How many TVs would you like to create?" << endl;				// Enter the number of TVs
	cin >> tvNum;
	while (tvNum > 100 || tvNum <= 0) {										// Input validation
		cout << "Enter a number greater than 0 and less than 100." << endl;
		cin >> tvNum;
	};

	do {																	// Creates and displays objects
		Television tName[100];
		for (i < 0; i < 100; i++) {
			tName->input();

			cout << "Would you like to turn the TV on or off? (yes = 1 / no = 0) ";		// Option to change TV power again
			cin >> answer;
			if (answer == 1) {
				cout << "On/Off? ";
				cin >> choice;
				tName->setPower(choice);
				cout << "Power is now: " << tName->getPower() << endl;
			}

			cout << "Would you like to adjust the TV volume? (yes = 1 / no = 0) ";		// Option to change TV volume again
			cin >> answer;
			if (answer == 1) {
				cout << "Enter volume: ";
				cin >> choice2;
				tName->setVolume(choice2);
				cout << "Volume is now: " << tName->getVolume() << endl;
			}

			cout << "Would you like to change the TV channel? (yes = 1 / no = 0) ";		// Option to change TV channel again
			cin >> answer;
			if (answer == 1) {
				cout << "Enter channel: ";
				cin >> choice2;
				tName->setChannel(choice2);
				cout << "Channel is now: " << tName->getChannel() << endl;
			}

			tName->display();															// Displays TV info
		}

		i--;																			// Iterator

	} while (tvNum != i);																// Breaks the loop

	exit(0);																			// End of program
}
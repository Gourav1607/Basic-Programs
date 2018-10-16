#include"iostream"
using namespace std;

int main() {
	float c, f;
	char choice;
	cout
			<< "enter choice 'f' for fahrenheit to celcius and 'c for celcius to fah. : "
			<< endl;
	cin >> choice;

	if (choice == 'f') {
		cout << "Enter Temperature in fahrenheit : " << endl;
		cin >> f;
		c = (f - 32) * 5 / 9.0;
		cout << "Temperature in celcius = " << c << endl;
	} else if (choice == 'c') {
		cout << "enter Temperature in celcius : " << endl;
		cin >> c;
		f = (c * 9.0 / 5) + 32;
		cout << "Temperature in fahrenheit = " << f << endl;
	} else {
		cout << "Wrong choice" << endl;
	}
	return 0;
}

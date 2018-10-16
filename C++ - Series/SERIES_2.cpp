#include<iostream>
#include<conio.h>
using namespace std;

class sum {
	int n, i;

public:

	void calculate();

};

void sum::calculate() {
	int sum = 0;
	cout << endl << " enter number ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			cout << "-" << i;
			sum = sum - i;
		} else {
			cout << "+" << i;
			sum = sum + i;
		}
	}
	cout << endl << sum;

}

int main() {
	sum s;
	char cha;
	do {
		cout << "    Program to calculate sum of series 1-2+3-4+5........   ";
		s.calculate();
		cout << endl << "Do you want to continue ..";
		fflush(stdin);
		cha = getch();
	} while (cha == 'y' || cha == 'Y');

}

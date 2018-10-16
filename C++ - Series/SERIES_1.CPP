#include<iostream>
#include<conio.h>
using namespace std;

class sum {
	int n, i;

public:

	void calculate();

};

void sum::calculate() {
	float sum = 0.0;
	cout << endl << "Enter no. of terms ";
	cin >> n;

	for (i = 1; i <= n; i++) {
		cout << "+" << "1/" << i;
		sum = sum + 1.0 / i;
	}

	cout << endl << "Sum is " << sum;

}

int main() {

	sum s;
	char cha;
	do {
		system("cls");
		cout << "    Program to calculate sum of series 1+1/2+1/3+1/4.....   ";
		s.calculate();
		cout << endl << "Do you want to continue ..";
		fflush(stdin);
		cha = getch();
	} while (cha == 'y' || cha == 'Y');

	return 0;
}

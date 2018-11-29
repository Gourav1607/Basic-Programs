#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

class array {
	int a[50];
public:
	void getdata();
	void even();
	void odd();
	void sumavg();
	void maxmin();
	void remove();
	void revers();
};

int i, size;               // global variables

void array::getdata() {
	cout << endl << "Enter no of elements ";
	cin >> size;
	cout << endl << "Enter array elements ";
	for (i = 0; i < size; i++)
		cin >> a[i];
}

void array::even() {
	cout << endl << "Even elements are ";
	for (i = 0; i < size; i++) {
		if (a[i] % 2 == 0)
			cout << endl << a[i] << " located at position " << i + 1;
	}
}

void array::odd() {
	cout << endl << "Odd elements are ";
	for (i = 0; i < size; i++) {
		if (a[i] % 2 != 0)
			cout << endl << a[i] << " located at position " << i + 1;
	}
}

void array::sumavg() {
	int sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i];
	float avg;
	avg = (float) sum / size;
	scout << endl << "Sum is " << sum << endl << "Average is " << avg;
}

void array::maxmin() {
	int max, min;

	for (i = 0; i < size; i++) {
		max = a[0];
		if (a[i] > max)
			max = a[i];
		min = a[0];
		if (a[0] < min)
			min = a[i];
	}
	cout << endl << "Maximum element is " << max << endl
			<< "Minimum element is " << min;
}

void array::remove() {
	int j, k;

	for (i = 0; i < size; i++)
		for (j = i + 1; j < size;) {
			while (a[i] == a[j]) {
				for (k = j; k < size; k++)
					a[k] = a[k + 1];
				size--;
			}
			j++;
		}

	cout << endl << "Resultant array is ";
	for (i = 0; i < size; i++)
		cout << endl << a[i];
}

void array::revers() {
	int j, t[50];

	for (i = size - 1, j = 0; i >= 0; i--, j++)
		t[j] = a[i];

	cout << endl << "Resultant array is ";
	for (i = 0; i < size; i++)
		cout << t[i] << " ";
}

int main() {
	array a;
	char cha;
	do {
		system("cls");
		cout << "         Main Menu  ";
		cout << endl << "1.Print even valued number ";
		cout << endl << "2.Print odd valued number ";
		cout << endl << "3.Print sum and average of elements ";
		cout << endl << "4.Print maximum and minimum elements of array ";
		cout << endl << "5.Remove duplicates of an array ";
		cout << endl << "6.Print array in reverse order ";
		cout << endl << "7.Exit ";

		int ch;
		cin >> ch;
		a.getdata();
		switch (ch) {
		case 1:
			a.even();
			break;
		case 2:
			a.odd();
			break;
		case 3:
			a.sumavg();
			break;
		case 4:
			a.maxmin();
			break;
		case 5:
			a.remove();
			break;
		case 6:
			a.revers();
			break;
		case 7:
			exit(0);
		default:
			cout << endl << "Invalid Input ";
		}
		cout << endl << "Do you want to continue ..";
		fflush(stdin);
		cha = getch();
	} while (cha == 'y' || cha == 'Y');
	return 0;
}

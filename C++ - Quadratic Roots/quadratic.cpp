#include "iostream"
#include "math.h"
#include "complex"
using namespace std;

int main() {
	double b, a, c;
	double root1, root2, des;
	cout << "enter the values of a , b, c for equation ax^2+bx+c : " << endl;
	cin >> a >> b >> c;
	des = (b * b) - (4 * a * c);
	cout << "value of descriminanant = " << des << endl;

	if (des < 0) {
		cout << "The roots are imaginary" << endl;
		complex<double> s(des, 0), r1, r2;
		complex<double> square;
		square = (sqrt(s));

		r1 = (-b + square) / 2.0 * a;
		r2 = (-b - square) / 2.0 * a;
		cout << "Root 1 = " << r1 << endl;
		cout << "Root 2 = " << r2 << endl;
	} else if (des == 0) {
		cout << "the roots are real and equal" << endl;
		root1 = -b / (2 * a);
		cout << "The root is :\n" << root1;
	} else if (des > 0) {
		cout << "The roots are real and unequal\n";
		root1 = (-b + sqrt(des)) / 2 * a;
		cout << "Root 1 = " << root1 << endl;
		root2 = (-b - sqrt(des)) / 2 * a;
		cout << "Root 2 = " << root2 << endl;
	}
	return 0;
}

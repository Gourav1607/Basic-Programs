#include "iostream"
#include "stdlib.h"
using namespace std;

int main() {
	system("clear");
	int i, j, k, m, n, p, q, sum = 0;
	cout << "number of rows and columns in matrix a :\n";
	cin >> m >> n;
	cout << "number of rows and columns in matrix b :\n";
	cin >> p >> q;

	if (n != p) {
		cout << "Matrices cannot be multiplied!!\n";
		exit(0);
	}

	int a[m][n];
	int b[p][q];
	int c[m][q];

	cout << " Enter matrix a : \n";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "Enter " << i + 1 << " row " << j + 1 << " element\n";
			cin >> a[i][j];
		}

	cout << endl << " Enter matrix b :\n";

	for (int i = 0; i < p; i++)
		for (int j = 0; j < q; j++) {
			cout << "Enter " << i + 1 << " row " << j + 1 << " element\n";
			cin >> b[i][j];
		}

	//matrix multiplication
	for (i = 0; i < m; i++) {
		for (j = 0; j < q; j++) {
			for (k = 0; k < p; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
			sum = 0;
		}
	}

	cout << " Product Matrix :\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << c[i][j] << ", ";
		}
		cout << endl;
	}
	return 0;
}

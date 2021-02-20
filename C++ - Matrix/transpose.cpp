#include "iostream"
#include "iomanip"
#include "cstdlib"
using namespace std;

int main()
{
	int m, n;
	system("clear");
	cout << "\n Enter Matrix Size : ";
	cout << "\n Row : ";
	cin >> m;
	cout << " Column : ";
	cin >> n;

	int mat[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << " Enter Element MAT[" << i << "][" << j << "] : ";
			cin >> mat[i][j];
		}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << mat[i][j];
		cout << endl;
	}

	int a, b;
	cout << "\n Enter Rows To Exchange : ";
	cin >> a >> b;

	if (a <= m && b <= n)
		for (int i = 0; i < n; i++)
			swap(mat[a][i], mat[b][i]);

	cout << " New Matrix Is : " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << mat[i][j];
		cout << endl;
	}
}

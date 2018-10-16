#include"iostream"
using namespace std;

int main() {
	double n, i;
	cin >> n;
	i = n;
	for (int j = 1; j <= n - 1; j++)
		i = i * j;

	cout << i << endl;
	return 0;
}

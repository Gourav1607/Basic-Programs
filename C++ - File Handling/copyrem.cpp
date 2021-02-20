#include "copyrem.h"

int main()
{
	copyrem c;
	char ch = 'y';
	while (ch != 'n')
	{
		system("cls");

		cout << "\n 01. Copy File Data Without White Spaces ";
		cout << "\n 02. Display File";
		cout << "\n 00. Exit";
		cout << "\n Enter Choice .. ";
		cin >> ch;
		switch (ch)
		{
		case '1':
			c.getfile();
			c.copyremove();
			c.display();
			break;
		case '2':
			c.display();
			break;
		case '0':
			ch = 'n';
			break;
		}
		system("pause");
	}
	return 0;
}

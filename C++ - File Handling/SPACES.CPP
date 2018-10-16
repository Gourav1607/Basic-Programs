#include <iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main() {
	clrscr();
	char a[150];
	char ch;
	int count = 0;
	cout << "Enter text" << endl;
	gets(a);
	ofstream file("EXAMPLE.txt");
	for (int i = 0; a[i] != '\0'; i++) {
		file.put(a[i]);
	}
	file.close();
	ifstream fin("EXAMPLE.txt");
	ofstream fout("NEW.txt");
	while (fin) {
		fin.get(ch);
		while (ch == ' ') {
			if (count == 0)
				fout.put(ch);
			fin.get(ch);
			//   count++;
		}
		fout.put(ch);
		count++;
	}
	fin.close();
	fout.close();
	ifstream fil("NEW.txt");

	cout << endl << "Final sentence is : ";
	while (fil) {
		fil.get(ch);

		cout << ch;
	}
	fil.close();
	getch();
}

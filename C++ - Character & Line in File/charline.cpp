#include "iostream"
#include "fstream"
#define SIZE 20
using namespace std;

int main()
{
    char ch = 'y';
    int nl = 0, nc = 0;
    char name[SIZE];
    ifstream ifile;

    while (ch != 'n')
    {
        system("cls");
        cout << "\n\t Menu ";
        cout << "\n 1. Count Character And Lines In A File";
        cout << "\n 0. Exit";
        cout << "\n Enter Choice .. ";
        cin.get(ch);

        switch (ch)
        {
        case '1':
            cout << "\n Enter File Name : ";
            fflush(stdin);
            gets(name);
            ifile.open(name);
            if (!ifile)
                cout << "\n File Not Present ";
            ifile.get(ch);
            while (!ifile.eof())
            {
                if (ch == '\n')
                    nl++;
                else if (ch != ' ')
                    nc++;
                ifile.get(ch);
            }
            cout << "\n Number Of Lines : " << nl;
            cout << "\n Number Of Characters : " << nc;
            ifile.close();
            system("pause");
            break;
        case '0':
            ch = 'n';
            break;
        }
    }
}

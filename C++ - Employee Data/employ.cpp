#include "employ.h"

int main()
{
    employee e;
    fstream file;
    char ch = 'y';
    while (ch != 'n')
    {
        system("cls");
        cout << "\n\t Menu ";
        cout << "\n 1. Enter Employee Data";
        cout << "\n 2. Print All Records";
        cout << "\n 0. Exit";
        cout << "\n Enter Choice .. ";
        cin >> ch;
        switch (ch)
        {
        case '1':
            file.open("employee.dat", ios::out | ios::app | ios::binary);
            e.getdata();
            file.write((char *)&e, sizeof(e));
            file.close();
            break;
        case '2':
            file.open("employee.dat", ios::in | ios::binary);
            while (file.read((char *)&e, sizeof(e)))
            {
                e.display();
                cout << endl;
                system("pause");
            }
            file.close();
            break;
        case '0':
            ch = 'n';
            break;
        default:
            cout << "\n Enter Valid Option .. ";
        }
    }
    return 0;
}

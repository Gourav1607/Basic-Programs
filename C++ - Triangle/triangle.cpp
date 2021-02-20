#include "triangle.h"

int main()
{
    float a, b, c;
    char ch = 'y';
    while (ch != 'n')
    {
        system("cls");
        cout << "\n 01. Enter Side For Equilateral Triangle";
        cout << "\n 02. Enter Sides For Isosceles Triangle";
        cout << "\n 03. Enter Sides For Scalene Triangle";
        cout << "\n 00. Exit ";
        cout << "\n Enter Choice .. ";
        cin.get(ch);
        triangle t();
        switch (ch)
        {
        case '1':
            getdata(a);
            t.setdata(a, a, a);
            t.displayarea();
            cout << endl;
            system("pause");
            break;
        case '2':
            getdata(a, b);
            t.setdata(a, a, b);
            t.displayarea();
            cout << endl;
            system("pause");
            break;
        case '3':
            getdata(a, b, c);
            t.setdata(a, b, c);
            t.displayarea();
            cout << endl;
            system("pause");
            break;
        case '0':
            ch = 'n';
            break;
        }
    }
    return 0;
}

#include "box.h"

int main()
{
    char ch = 'y';
    float a, b, c;
    getdata(a, b, c);
    box bb(a, b, c);

    while (ch != 'n')
    {
        system("cls");
        cout << "\n\t Menu ";
        cout << "\n 1. Calculate Volume ";
        cout << "\n 2. Add Two Boxes ";
        cout << "\n 3. Check If Two Boxes Are Equal Or Not";
        cout << "\n 4. Check If It Is Cube Or Cuboid ";
        cout << "\n 5. Re-Enter Values Of Box ";
        cout << "\n 0. Exit ";
        cout << "\n Enter Choice .. ";
        cin.get(ch);
        switch (ch)
        {
        case '1':
            bb.calcvol();
            bb.display();
            cout << endl;
            system("pause");
            break;
        case '2':
            bb.display();
            cout << "\n Enter Data For Another Box ";
            getdata(a, b, c);
            box b2(a, b, c);
            box b3;
            b3 = bb + b2;
            b3.display();
            cout << endl;
            system("pause");
            break;
        case '3':
            bb.display();
            cout << "\n Enter Data For Another Box ";
            getdata(a, b, c);
            box b2(a, b, c);
            if (bb == b2)
                cout << "\n They Are Equal ";
            else
                cout << "\n They Are Different ";
            cout << endl;
            system("pause");
            break;
        case '4':
            bb.display();
            int x = bb.checkcube();
            if (x)
                cout << "\n This Is A Cube ";
            else
                cout << "\n This Is A Cuboid ";
            cout << endl;
            system("pause");
            break;
        case '5':
            bb.getdata();
            bb.display();
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

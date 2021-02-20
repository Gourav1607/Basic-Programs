/* 
 * Add Polynomial
 * Author : Gourav Siddhad
 * Created on April 8, 2014, 1:29 AM
 */

#include <iostream>
#include <cstdlib>
#include "poly_eq.h"
using namespace std;

int main()
{
    poly<int, int> p1, p2, p3;
    int ch = 0;
    do
    {
        cout << "\n Addition Of Polynomials";
        cout << "\n 1. Enter 1st Polynomial";
        cout << "\n 2. Enter 2nd Polynomial";
        cout << "\n 3. Display 1st Polynomial";
        cout << "\n 4. Display 2nd Polynomial";
        cout << "\n 5. Add Both Polynomial";
        cout << "\n 6. Exit";
        cout << "\n Enter Choice .. ";
        cin >> ch;
        system("clear");
        cout << endl;
        switch (ch)
        {
        case 1:
            cout << " Enter 1st Polynomial : ";
            try
            {
                p1.geteqn();
                p1.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty";
                if (er == 2)
                    cout << " Invalid Exponent";
            }
            break;
        case 2:
            cout << " Enter 2nd Polynomial : ";
            try
            {
                p2.geteqn();
                p2.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty";
                if (er == 2)
                    cout << " Invalid Exponent";
            }
            break;
        case 3:
            cout << " 1st Polynomial : ";
            try
            {
                p1.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty ";
            }
            break;
        case 4:
            cout << " 2nd Polynomial : ";
            try
            {
                p2.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty ";
            }
            break;
        case 5:
            cout << "\n 1st Polynomial : ";
            try
            {
                p1.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty";
            }
            cout << "\n 2nd Polynomial : ";
            try
            {
                p2.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty";
            }
            p3 = p2.add(p1);
            cout << "\n Sum : ";
            try
            {
                p3.display();
            }
            catch (int er)
            {
                if (er == 1)
                    cout << " Empty";
            }
            break;
        }
        cout << endl;
    } while (ch != 6);
    return 0;
}
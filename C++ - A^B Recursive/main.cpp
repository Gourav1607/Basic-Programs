/* 
 * A^B Recursive
 * Author : Gourav Siddhad
 * Created on February 19, 2014, 11:49 PM
 */

#include <iostream>
using namespace std;

double rec_power(float, int);

int main()
{
    float b;
    int r;
    double ans;
    cout << " To Calculate b^r : ";
    cout << "\n Enter Base b : ";
    cin >> b;
    cout << " Enter Power r : ";
    cin >> r; //If Power Is Entered In Floating Point Then It Will Be
              //Automatically Truncated
    ans = rec_power(b, r);
    cout << " " << b << " ^ " << r << " Is : " << ans;
    return 0;
}

double rec_power(float b, int r)
{
    if (r == 0)
        return 1;
    if (r < 0)
        return ((1 / b) * rec_power(b, r + 1));
    else
        return (b * rec_power(b, r - 1));
}
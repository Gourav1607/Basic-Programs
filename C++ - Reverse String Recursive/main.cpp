/* 
 * Reverse String Recursive
 * Author : Gourav Siddhad
 * Created on February 19, 2014, 11:49 PM
 */

#include <iostream>
using namespace std;

void rec_rev_str();

int main()
{
    cout << " Enter The String To Be Reversed .. Press Enter To Stop : ";
    rec_rev_str();
    return 0;
}

void rec_rev_str()
{
    char ch;
    ch = cin.get();
    if (ch != '\n')
        rec_rev_str();
    cout << ch;
}
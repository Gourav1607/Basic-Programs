/* 
 * Matrices
 * Author : Gourav Siddhad
 * Created on February 20, 2014, 5:51 PM
 */

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "diagonal.h"
#include "lowertri.h"
#include "uppertri.h"
#include "symmetric.h"
using namespace std;

void home();
int main()
{
    home();
    return 0;
}

void home()
{
    int ch;
    system("clear");
    
    cout<<"\t Main Menu\n";
    cout<<" 01. Diagonal Matrix\n";
    cout<<" 02. Lower Triangular Matrix\n";
    cout<<" 03. Upper Triangular Matrix\n";
    cout<<" 04. Symmetric Matrix\n";
    cout<<" 05. Exit\n";
    cout<<" Enter Choice ... ";
    cin>>ch;
    
    switch(ch)
    {
        case 1:
            diagonal();
            break;
        case 2:
            lowertri();
            break;
        case 3:
            uppertri();
            break;
        case 4:
            symmetric();
            break;
        case 5:
            exit(0);
        default:
            cout<<"\n Wrong Choice ...\n";
    }
    home();
}
#ifndef EMPLOY_H
#define EMPLOY_H

#include "iostream"
#include "fstream"

#define SIZE 20
using namespace std;

class employee
{
    int eid;
    char name[SIZE];
    float basic, hra, da, extra;

public:
    employee();
    //employee(const int&,const char[],const float&,const float&,const float&,const float&);
    void getdata();
    void display();
};

employee ::employee()
{
    eid = 0;
    strcpy(name, "");
    basic = 0;
    hra = 0;
    da = 0;
    extra = 0;
}

void employee ::getdata()
{
    cout << "\n Enter Employee Id : ";
    while (eid <= 0)
        cin >> eid;
    cout << " Enter Employee Name : ";
    fflush(stdin);
    gets(name);
    cout << " Enter HRA : ";
    while (hra <= 0)
        cin >> hra;
    cout << " Enter DA : ";
    while (da <= 0)
        cin >> da;
    cout << " Extra Allowance : ";
    while (extra <= 0)
        cin >> extra;
}
/*
employee::employee(const int &id,const char nam[],const float &bas,const float &hr,const float &d,const float &ext)
{
    eid=id;
    strcpy(name,nam);
    basic=bas;
    hra=hr;
    da=d;
    extra=ext;
}
*/
void employee ::display()
{
    cout << "\n E id : " << eid;
    cout << "\t Name : " << name;
    cout << "\n Basic : " << basic;
    cout << "\t HRA : " << hra;
    cout << "\n DA : " << da;
    cout << "\t Extra Allowance : " << extra;
}

#endif

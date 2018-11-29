#ifndef MYSTRING_H
#define MYSTRING_H

#include "iostream"
#include "cstring"
#include "stdio.h"
using namespace std;

class mystring {
    char str[20];
    public:
    void getdata();
    mystring strcatt(const mystring &);
    int length();
    void strapp(const mystring &);
    int compare(const mystring &);
    void disp();
};

mystring mystring :: strcatt(const mystring &s1) {
    mystring s;
    strcpy(s.str, str);
    strcat(s.str, s1.str);
    return s;
}

void mystring :: getdata() {
    cout<<"Enter the String: ";
    fflush(stdin);
    gets(str);
}

void mystring :: disp() {
    cout<<str;
}

int mystring :: length() {
    int n=0;
    for(int i=0; str[i]!='\0'; i++)
        n++;
    return n;
}

void mystring :: strapp(const mystring &s) {
    strcat(str, s.str);
}

int mystring :: compare(const mystring &s) {
    if(strcmp(str, s.str) == 0)
        return 1;
    else
        return 0;
}

#endif

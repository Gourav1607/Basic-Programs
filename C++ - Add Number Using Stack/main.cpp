/* 
 * Add Number Using Stack
 * Author: Gourav Siddhad
 * Created on April 5, 2014, 3:48 PM
 */

#include <iostream>
#include <string.h>
#include <cstdio>
#include <cctype>
#include "mystack.h"
using namespace std;

template <class T>
void getnumber(mystack<T>&);

template <class T>
mystack<T> addmystack(mystack<T>,mystack<T>);


int main()
{
    char ch1[SIZE],ch2[SIZE];
    mystack<int> st1,st2,result;
    try{
        cout<<"\n Add Two Large Numbers Using Stack ";
        cout<<"\n Enter First Number : ";
        getnumber(st1); 
        cout<<" Enter Second Number : ";
        getnumber(st2);
    
        result=addmystack(st1,st2);
        result.display();
    }catch(int er){
        if(er==1)       cout<<"\n Characters Not Allowed";
    }
    return 0;
}

template <class T>
void getnumber(mystack<T> &s)
{
    char ch;
    int c;
    ch=cin.get();
    while(ch!='\n')
    {
        if(isalpha(ch))
            throw 1;
        s.push(ch-'0');
        ch=cin.get();
    }
}

template <class T>
mystack<T> addmystack(mystack<T> st1,mystack<T> st2)
{
    mystack<T> res;
    int x=0,y=0,carry=0,sum=0;
    while(!(st1.isempty() && st2.isempty()))
    {
        if(!st1.isempty())
            x=st1.pop();
        else 
            x=0;
        if(!st2.isempty())
            y=st2.pop();
        else
            y=0;
        sum=x+y+carry;
        res.push(sum%10);
        carry=sum/10;
    }
    return res;
}
/* 
 * Evaluate Postfix
 * Author : Gourav Siddhad
 * Created on April 5, 2014, 11:25 PM
 */

#include <iostream>
#include <cstdio>
#include "mystack.h"
using namespace std;

template <class T>
T evaluate(T,char,T);

int main()
{
    char str[30];
    cout<<"\n Evaluate Postfix Expression Using Stack";
    cout<<"\n Enter Expression : ";
    fflush(stdin);
    gets(str);
    int val,x,y,i=0;
    mystack<int> st;
    
    try{
        while(str[i]!='\0')
        {
            if(str[i]>'0' && str[i]<'9')
            {
                if(!st.isfull())
                    st.push(str[i]-'0');
                else
                    throw 1;
            }
            else if(str[i]=='-' || str[i]=='+' || str[i]=='/' || str[i]=='*' || str[i]=='%')
            {
                if(!st.isempty())
                    y=st.pop();
                else
                    throw 2;
                
                if(!st.isempty())
                    x=st.pop();
                else
                    throw 2;
                
                val=evaluate(x,str[i],y);
                if(!st.isfull())
                    st.push(val);
                else
                    throw 1;
            }
            else
                throw 3;
            i++;
        }
        if(!st.isempty())
            val=st.pop();
        if(!st.isempty())
            throw 4;
        cout<<" The Evaluated Value Is : "<<val;
    }
    catch(int er){
        if(er==1)
            cout<<" Stack Full";
        if(er==2)
            cout<<" Stack Empty";
        if(er==3)
            cout<<" Invalid Values";
        if(er==4)
            cout<<" Invalid Expression";
    }
    return 0;
}

template <class T>
T evaluate(T x,char s,T y)
{
    switch(s)
    {
        case '/':
            return x/y;
        case '*':
            return x*y;
        case '-':
            return x-y;
        case '+':
            return x+y;
        case '%':
            return x%y;
    }
}
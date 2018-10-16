/* 
 * poly_eq.h / Add Polynomial
 * Author : Gourav Siddhad
 * Created on April 8, 2014, 11:08 AM
 */

#ifndef POLY_EQ_H
#define	POLY_EQ_H
#include <cstdio>
using namespace std;

template <class T1,class T2>
class poly
{
    class node{
    public:
        T1 coef;
        T2 expo;
        node *next;
        node(){
            coef=expo=0;
            next=NULL;
        }
    }*first;
    public:
        poly(){
            first=NULL;
        }
        bool isempty(){
            return first==NULL;
        }
        void clear();
        void geteqn();
        void display();
        poly<T1,T2> add(poly<T1,T2>);
};

template <class T1,class T2>
void poly<T1,T2> :: clear()
{
    node *tra=first;
    node *de;
    while(tra!=NULL)
    {
        de=tra;
        tra=tra->next;
        de->next=NULL;
        delete de;
    }
    first=NULL;
}

template <class T1,class T2>
void poly<T1,T2> :: geteqn()
{
    clear();
    node *t,*temp=new node();
    temp=NULL;
    T2 maxex=0;
    cout<<"\n Enter Maximum Exponent Number :";
    cin>>maxex;
    if(maxex<0)
        throw 2;
    for(int i=0;i<=maxex;i++)
    {
        t = new node();
        t->expo=(T2)i;
        cout<<" Enter Co-Efficient For X^"<<i<<" : ";
        cin>>t->coef;
        if(temp==NULL)
        {
            temp=t;
            first=temp;
        }
        else
        {
            temp->next=new node();
            temp->next=t;
            temp=temp->next;
        }
    }
}

template <class T1,class T2>
void poly<T1,T2> :: display()
{
    if(isempty())
        throw 1;
    node *tra=new node();
    tra=first;
    while(tra!=NULL)
    {
        if(tra->coef !=0)
        {
            if(tra->coef >0)
                cout<<" +";
            cout<<" "<<tra->coef<<" (X^"<<tra->expo<<")";
        }
        tra=tra->next;
    }
}

template <class T1,class T2>
poly<T1,T2> poly<T1,T2> :: add (poly<T1,T2> p2)
{
    poly<T1,T2> p3;
    p3.first=NULL;
    
    if(isempty() && p2.isempty())
        return p3;
    
    node *n1,*n2,*n3,*t;
    n1=new node();
    n2=new node();
    p3.first=n3=t=new node();
    
    n1=first;
    n2=p2.first;
    
    while(n1!=NULL && n2!=NULL)
    {
        t->coef = n1->coef + n2->coef;
        t->expo = n1->expo;
        n1=n1->next;
        n2=n2->next;
        
        n3=t;
        t=new node();
        n3->next=t;
    }
    while(n1!=NULL)
    {
        t->coef = n1->coef;
        t->expo = n1->expo;
        n1=n1->next;
        n3=t;
        t=new node();
        n3->next=t;
    }
    while(n2!=NULL)
    {
        t->coef = n2->coef;
        t->expo = n2->expo;
        n2=n2->next;
        n3=t;
        t=new node();
        n3->next=t;
    }

    n3->next=NULL;
    delete t;
    return p3;
}

#endif	/* POLY_EQ_H */
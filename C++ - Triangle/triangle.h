#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "iostream"
#include "cmath"
using namespace std;

void getdata(float&);
void getdata(float&, float&);
void getdata(float&, float&, float&);

class triangle {
    private:
        float a, b, c, area;
        void calculate();
    public:
        triangle();
        triangle(float);
        triangle(float, float);
        triangle(float, float, float);
        void setdata(float, float, float);
        triangle& operator=(const triangle&);
        int operator==(const triangle&);
        void displayarea();
        float getarea();
};

triangle :: triangle() {
    a = b = c = area = 0;
}

triangle :: triangle(float one) {
    a = b = c = one;
    calculate();
}

triangle :: triangle(float one, float two) {
    a = one;
    b = one;
    c = two;
    calculate();
}

triangle :: triangle(float one, float two, float three) {
    a = one;
    b = two;
    c = three;
    calculate();
}

triangle :: setdata(float one, float two, float three) {
    a = one;
    b = two;
    c = three;
    calculate();
}

triangle& triangle :: operator=(const triangle &t) {
    a = t.a;
    b = t.b;
    c = t.c;
    area = t.area;
    return *this;
}

int triangle :: operator==(const triangle &t) {
    if(a == t.a && b == t.b && c == t.c)
        return 1;
    else
        return 0;
}

void triangle :: displayarea() {
    cout<<"\n Area Of Required Triangle Is : "<<area;
}

void triangle :: calculate() {
    float s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

void getdata(float &one) {
    cout<<"\n Enter Side : ";
    cin>>one;
}

void getdata(float &one, float &two) {
    cout<<"\n Enter Side Common To Two : ";
    cin>>one;
    cout<<" Enter Third Side : ";
    cin>>two;
}

void getdata(float &one, float &two, float &three) {
    cout<<"\n Enter First Side : ";
    cin>>one;
    cout<<" Enter Second Side : ";
    cin>>two;
    cout<<" Enter Third Side : ";
    cin>>three;
}

float getarea() {
    return area;
}

#endif

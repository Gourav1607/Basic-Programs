#ifndef COMPLEX_H
#define COMPLEX_H

#include "iostream"
#include "string.h"
#include "cmath"
#include "process.h"
using namespace std;

class complex
{
    int real, imag;

public:
    void getdata();
    void display();
    complex add(const complex &);
    complex subtract(const complex &);
    complex multiply(const complex &);
    complex divide(const complex &);
    float modulus();
};

void complex ::getdata()
{
    cout << "\nEnter the real part";
    cin >> real;
    cout << "\nEnter the imaginary part";
    cin >> imag;
}

void complex ::display()
{
    cout << "\nThe complex number is" << endl;
    cout << real << "+i(" << imag << ")";
}

complex complex ::add(const complex &A)
{
    complex B;
    B.real = A.real + real;
    B.imag = A.imag + imag;
    return B;
}

complex complex ::subtract(const complex &A)
{
    complex B;
    B.real = real - A.real;
    B.imag = imag - A.imag;
    return B;
}

complex complex ::multiply(const complex &A)
{
    complex B;
    B.real = real * A.real - imag * A.imag;
    B.imag = A.real * imag + real * A.imag;
    return B;
}

complex complex ::divide(const complex &A)
{
    complex B;
    B.real = (real * A.real + imag * A.imag) / (A.real * A.real + A.imag * A.imag);
    B.imag = (A.real * imag - A.imag * real) / (A.real * A.real + A.imag * A.imag);
    return B;
}

float complex ::modulus()
{
    float mod;
    mod = sqrt(real * real + imag * imag);
    return mod;
}

#endif

#ifndef BOX_H
#define BOX_H

#include "iostream"
using namespace std;

void getdata(float&);
void getdata(float&, float&, float&);

class box {
    float len, bre, hei, vol;
    public:
        box();
        box(const float&);
        box(const float&, const float&, const float&);
        box(const box&);
        void calcvol();
        box operator+(const box&);
        friend int operator==(const box&, const box&);
        box& operator=(const box&);
        int checkcube();
        void getdata();
        void display();
};

void box :: getdata() {
    cout<<"\n Enter Length : ";
    cin>>len;
    cout<<" Enter Breadth : ";
    cin>>bre;
    cout<<" Enter Height : ";
    cin>>hei;
    calcvol();
}

box :: box() {
    len = bre = hei = vol = 0;
}

box :: box(const float &a) {
    len = bre = hei = a;
    calcvol();
}

box :: box(const float &a, const float &b, const float &c) {
    len = a;
    bre = b;
    hei = c;
}

box :: box(const box &b) {
    len = b.len;
    bre = b.bre;
    hei = b.hei;
    vol = b.vol;
}

int operator==(const box &b1, const box &b2) {
    if(b1.len == b2.len && b1.bre == b2.bre && b1.hei == b2.hei)
        return 1;
    else
        return 0;
}

void box :: calcvol() {
    vol=len * bre * hei;
}

box box :: operator+(const box &b) {
    box bb;
    bb.len = len + b.len;
    bb.bre = bre + b.bre;
    bb.hei = hei + b.hei;
    bb.calcvol();
    return bb;
}

box& box :: operator=(const box &b) {
    len = b.len;
    bre = b.bre;
    hei = b.hei;
    vol = b.vol;
    return *this;
}

int box :: checkcube() {
    if(len == bre && len == hei)
        return 1;
    else
        return 0;
}

void box :: display() {
    cout<<"\n Length : "<<len<<"\t Breadth : "<<bre<<"\t Height : "<<hei;
    cout<<"\n Volume : "<<vol;
}

void getdata(float &a) {
    cout<<"\n Enter The Side For Cube : ";
    cin>>a;
}

void getdata(float &a, float &b, float &c) {
    cout<<"\n Enter Length : ";
    cin>>a;
    cout<<" Enter Breadth : ";
    cin>>b;
    cout<<" Enter Height : ";
    cin>>c;
}

#endif

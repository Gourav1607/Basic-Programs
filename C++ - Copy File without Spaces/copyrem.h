#ifndef COPYREM_H
#define COPYREM_H

#include "iostream"
#include "fstream"
#define SIZE 20
using namespace std;

class copyrem {
    char name[SIZE];
    public:
        void copyremove();
        void getfile();
        void display();
};

void copyrem :: getfile() {
    cout<<"\n Enter Name Of File : ";
    fflush(stdin);
    gets(name);
}

void copyrem :: copyremove() {
    char ch;
    int flag=0;
    ifstream ifile(name);
    ofstream ofile("temp.txt");

    ifile.get(ch);
    while(!ifile.eof()) {
        if(ch == '\n') {
            if(flag == 0)
                ofile.put(ch);
            flag=1;
        } else if(ch != ' ') {
            ofile.put(ch);
            flag=0;
        }
        ifile.get(ch);
    }

    ifile.close();
    ofile.close();
    remove(name);
    rename("temp.txt", name);
}

void copyrem :: display() {
    char ch;
    ifstream ifile(name);
    ifile.get(ch);
    while(!ifile.eof()) {
        cout.put(ch);
        ifile.get(ch);
    }
    ifile.close();
}

#endif

#include "copyrem.h"

int main() {
    copyrem c;
    char ch = 'y';
    while(ch != 'n') {
        system("cls");
        cout<<"\n\t Menu ";
        cout<<"\n 1. Copy File Data Without White Spaces ";
        cout<<"\n 2. Display File";
        cout<<"\n 0. Exit";
        cout<<"\n Enter Choice .. ";
        cin>>ch;
        switch(ch) {
            case '1':
                c.getfile();
                c.copyremove();
                c.display();
                break;
            case '2':
                c.display();
                break;
            case '0':
                ch = 'n';
                break;
        }
        system("pause");
    }
    return 0;
}

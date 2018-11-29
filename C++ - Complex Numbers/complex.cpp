#include "complex.h"

int main() {
    char ch;
    int choice;
    do {
        cout<<"\n\tMENU"<<endl;
        cout<<"\n 1. Add"<<"\n 2. Subtract"<<"\n 3. Multiply"<<"\n 4. Divide"<<"\n 5. Modulus"<<"\n 6. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        complex A, B, C;
        switch(choice) {
            case 1:
                A.getdata();
                B.getdata();
                C = A.add(B);
                C.display();
                break;
            case 2:
                A.getdata();
                B.getdata();
                C = A.subtract(B);
                C.display();
                break;
            case 3:
                A.getdata();
                B.getdata();
                C = A.multiply(B);
                C.display();
                break;
            case 4:
                A.getdata();
                B.getdata();
                C = A.divide(B);
                C.display();
                break;
            case 5:
                float mod;
                mod = A.modulus();
                cout<<"The modulus is "<<mod<<endl;
                break;
            case 6:
            default:
                exit(0);
        }
        cout<<"Do you want to continue"<<endl;
        cin>>ch;
    } while ((ch == 'y') || (ch == 'Y'));
    return 0;
}

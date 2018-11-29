#include "mystring.h"

int main() {
    char ch1 = 'y';
    while(ch1 == 'y') {
        mystring s1, s2, s3;
        char ch;
        cout<<"\n\t Menu ";
        cout<<"\n 1.Concatenate two strings.";
        cout<<"\n 2.Append two strings.";
        cout<<"\n 3.Length of a string.";
        cout<<"\n 4.Compare two strings.";
        cout<<"\n Enter choice....";
        cin>>ch;
        if(ch == '1') {
            s1.getdata();
            s2.getdata();
            s3 = s1.strcatt(s2);
            s3.disp();
        } else if(ch == '2') {
            s1.getdata();
            s2.getdata();
            s1.strapp(s2);
            s1.disp();
        } else if(ch == '3') {
            int n;
            s1.getdata();
            n = s1.length();
            cout<<"Length of string is: "<<n;
        } else if(ch == '4') {
            int i;
            s1.getdata();
            s2.getdata();
            i = s1.compare(s2);
            if(i == 1)
                cout<<"Strings are equal";
            else
                cout<<"Strings are not equal";
        }
        cout<<endl<<"Do again(y/n)?....";
        cin>>ch1;
    }
    return 0;
}

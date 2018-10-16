/* 
 * symmetric.h / Matrices
 * Author : Gourav Siddhad
 * Created on February 20, 2014, 8:11 PM
 */

#ifndef SYMMETRIC_H
#define	SYMMETRIC_H

using namespace std;

void symmetric();
void sprint1d(int[],int);       // print matrix in 1D
void sprint2d(int[],int);       // print matrix in 2D
void sreenter(int[],int);       // re-enter elements of the matrix
void ssearch(int[],int);        // search for an element in matrix
void sgetel(int[],int);         // get element from a position in matrix

void symmetric()
{
    system("clear");
    cout<<"\t Symmetric Matrix\n";
    cout<<" Enter Size Of Matrix : ";
    int size;
    cin>>size;
    
    int sym[size*size];
    sreenter(sym,size);
    system("clear");
    while(1)
    {
        cout<<"\n\t Symmetric Matrix\n";
        cout<<"\n 01. Print Matrix In 1D";
        cout<<"\n 02. Print Matrix In 2D";
        cout<<"\n 03. Re-Enter Matrix";
        cout<<"\n 04. Search For An Element";
        cout<<"\n 05. Get Element From A Position";
        cout<<"\n 06. Return To Main Menu";
        cout<<"\n Enter Choice ... ";
        int ch;
        cin>>ch;
        system("clear");
    
        switch(ch)
        {
            case 1:
                sprint1d(sym,size);
                break;
            case 2:
                sprint2d(sym,size);
                break;
            case 3:
                sreenter(sym,size);
                break;
            case 4:
                ssearch(sym,size);
                break;
            case 5:
                sgetel(sym,size);
                break;
            case 6:
                return;
        }
    }
}

void sprint1d(int sym[],int s)
{
    cout<<endl;
    cout<<"[ ";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cout<<sym[s*i+j]<<" ";
        }
    }
    cout<<"]\n";
}

void sprint2d(int sym[],int s)
{
    cout<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<" | ";
        for(int j=0;j<s;j++)
            cout<<sym[s*i+j]<<" ";
        cout<<"|\n";
    }
}

void sreenter(int sym[],int s)
{
    cout<<" For The Symmetric Matrix Of Size "<<s<<" X "<<s<<"\n";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i>=j)
            {
                cout<<" Enter Element A["<<i+1<<","<<j+1<<"] : ";
                cin>>sym[s*i+j];
                sym[s*j+i]=sym[s*i+j];
            }
        }
    }
}

void ssearch(int sym[],int s)
{
    cout<<"\n Enter Element To Be Searched : ";
    int el,i,j;
    bool flag=0;
    cin>>el;
    for(i=0;i<s;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(el==sym[s*i+j])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag==1)
    {
        cout<<" Element Found At Position : "<<i+1<<","<<j+1;
        if(i!=j)
            cout<<"\n And At Position : "<<j+1<<","<<i+1;
    }
    else
        cout<<" Element Not Found ... ";
    cout<<endl;
}

void sgetel(int sym[],int s)
{
    cout<<" Enter Position To Get Element From : ";
    int pos1,pos2;
    cout<<"\n Row : ";
    cin>>pos1;
    cout<<" Column : ";
    cin>>pos2;
    
    if(pos1<=s && pos2<=s)
        cout<<" Element A["<<pos1<<","<<pos2<<"] Is "<<sym[s*(pos1-1)+(pos2-1)];
    else
        cout<<" Wrong Position Entered .. ";
}

#endif	/* SYMMETRIC_H */
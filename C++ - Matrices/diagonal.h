/* 
 * diagonal.h / Matrices
 * Author : Gourav Siddhad
 * Created on February 20, 2014, 5:58 PM
 */

#ifndef DIAGONAL_H
#define DIAGONAL_H

using namespace std;

void diagonal();
void dprint1d(int[], int); //print matrix in 1D
void dprint2d(int[], int); //print matrix in 2D
void dreenter(int[], int); //re-enter elements of the matrix
void dsearch(int[], int);  //search for an element in matrix
void dgetel(int[], int);   //get element from a position in matrix

void diagonal()
{
    system("clear");
    cout << "\t Diagonal Matrix\n";
    cout << " Enter Size Of Matrix : ";
    int size;
    cin >> size;

    int dia[size];
    dreenter(dia, size);
    system("clear");
    while (1)
    {
        cout << "\n\t Diagonal Matrix\n";
        cout << "\n 01. Print Matrix In 1D";
        cout << "\n 02. Print Matrix In 2D";
        cout << "\n 03. Re-Enter Matrix";
        cout << "\n 04. Search For An Element";
        cout << "\n 05. Get Element From A Position";
        cout << "\n 06. Return To Main Menu";
        cout << "\n Enter Choice ... ";
        int ch;
        cin >> ch;
        system("clear");

        switch (ch)
        {
        case 1:
            dprint1d(dia, size);
            break;
        case 2:
            dprint2d(dia, size);
            break;
        case 3:
            dreenter(dia, size);
            break;
        case 4:
            dsearch(dia, size);
            break;
        case 5:
            dgetel(dia, size);
            break;
        case 6:
            return;
        }
    }
}

void dprint1d(int dia[], int s)
{
    cout << endl;
    cout << "[ ";
    for (int i = 0; i < s; i++)
        cout << dia[i] << " ";
    cout << "]\n";
}

void dprint2d(int dia[], int s)
{
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << " | ";
        for (int j = 0; j < s; j++)
        {
            if (i == j)
                cout << dia[i] << " ";
            else
                cout << "* ";
        }
        cout << "|\n";
    }
}

void dreenter(int dia[], int s)
{
    cout << " For The Diagonal Matrix Of Size " << s << " X " << s << "\n";
    for (int i = 0; i < s; i++)
    {
        cout << " Enter Element A[" << i + 1 << "," << i + 1 << "] : ";
        cin >> dia[i];
    }
}

void dsearch(int dia[], int s)
{
    cout << "\n Enter Element To Be Searched : ";
    int el, i;
    bool flag = 0;
    cin >> el;
    for (i = 0; i < s; i++)
    {
        if (el == dia[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << " Element Found At Position : " << i + 1 << "," << i + 1 << "\n";
    else
        cout << " Element Not Found ... \n";
}

void dgetel(int dia[], int s)
{
    cout << "Enter Position To Get Element From : ";
    int pos;
    cin >> pos;
    if (pos <= s)
        cout << " Element A[" << pos << "," << pos << "] Is " << dia[pos - 1];
    else
        cout << " Wrong Position Entered .. ";
}

#endif /* DIAGONAL_H */
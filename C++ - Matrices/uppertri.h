/* 
 * uppertri.h / Matrices
 * Author : Gourav Siddhad
 * Created on February 20, 2014, 8:11 PM
 */

#ifndef UPPERTRI_H
#define UPPERTRI_H

using namespace std;

void uppertri();
void uprint1d(int[], int, int); // print matrix in 1D
void uprint2d(int[], int, int); // print matrix in 2D
void ureenter(int[], int, int); // re-enter elements of the matrix
void usearch(int[], int, int);  // search for an element in matrix
void ugetel(int[], int, int);   // get element from a position in matrix

void uppertri()
{
    system("clear");
    cout << "\t Upper Triangular Matrix\n";
    cout << " Enter Size Of Matrix : ";
    cout << "\n Rows : ";
    int nr, nc;
    cin >> nr;
    cout << " Columns : ";
    cin >> nc;

    int upp[nr * nc];
    ureenter(upp, nr, nc);
    system("clear");
    while (1)
    {
        cout << "\n\t Upper Triangular Matrix\n";
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
            uprint1d(upp, nr, nc);
            break;
        case 2:
            uprint2d(upp, nr, nc);
            break;
        case 3:
            ureenter(upp, nr, nc);
            break;
        case 4:
            usearch(upp, nr, nc);
            break;
        case 5:
            ugetel(upp, nr, nc);
            break;
        case 6:
            return;
        }
    }
}

void uprint1d(int upp[], int nr, int nc)
{
    cout << endl;
    cout << "[ ";
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (i < j)
                cout << upp[nc * i + j] << " ";
        }
    }
    cout << "]\n";
}

void uprint2d(int upp[], int nr, int nc)
{
    cout << endl;
    for (int i = 0; i < nr; i++)
    {
        cout << " | ";
        for (int j = 0; j < nc; j++)
        {
            if (i < j)
                cout << upp[nc * i + j] << " ";
            else
                cout << "* ";
        }
        cout << "|\n";
    }
}

void ureenter(int upp[], int nr, int nc)
{
    cout << " For The Upper Triangular Matrix Of Size " << nr << " X " << nc << "\n";
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (i < j)
            {
                cout << " Enter Element A[" << i + 1 << "," << j + 1 << "] : ";
                cin >> upp[nc * i + j];
            }
            else
                upp[nc * i + j] = 0;
        }
    }
}

void usearch(int upp[], int nr, int nc)
{
    cout << "\n Enter Element To Be Searched : ";
    int el, i, j;
    bool flag = 0;
    cin >> el;
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            if (i < j && el == upp[nc * i + j])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag == 1)
        cout << " Element Found At Position : " << i + 1 << "," << j + 1 << "\n";
    else
        cout << " Element Not Found ... \n";
}

void ugetel(int upp[], int nr, int nc)
{
    cout << " Enter Position To Get Element From : ";
    int pos1, pos2;
    cout << "\n Row : ";
    cin >> pos1;
    cout << " Column : ";
    cin >> pos2;

    if (pos1 <= nr && pos2 <= nc)
    {
        if (pos1 < pos2)
            cout << " Element A[" << pos1 << "," << pos2 << "] Is " << upp[nc * (pos1 - 1) + (pos2 - 1)];
        else
            cout << " Element Not Present At A[" << pos1 << "," << pos2 << "]\n";
    }
    else
        cout << " Wrong Position Entered .. ";
}

#endif /* UPPERTRI_H */
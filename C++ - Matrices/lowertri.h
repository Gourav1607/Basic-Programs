/* 
 * lowertri.h / Matrices
 * Author : Gourav Siddhad
 * Created on February 20, 2014, 8:11 PM
 */

#ifndef LOWERTRI_H
#define LOWERTRI_H

using namespace std;

void lowertri();
void lprint1d(int[], int, int); // print matrix in 1D
void lprint2d(int[], int, int); // print matrix in 2D
void lreenter(int[], int, int); // re-enter elements of the matrix
void lsearch(int[], int, int);  // search for an element in matrix
void lgetel(int[], int, int);   // get element from a position in matrix

void lowertri()
{
    system("clear");
    cout << "\t Lower Triangular Matrix\n";
    cout << " Enter Size Of Matrix : ";
    cout << "\n Rows : ";
    int nr, nc;
    cin >> nr;
    cout << " Columns : ";
    cin >> nc;

    int low[nr * nc];
    lreenter(low, nr, nc);
    system("clear");
    while (1)
    {
        cout << "\n\t Lower Triangular Matrix\n";
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
            lprint1d(low, nr, nc);
            break;
        case 2:
            lprint2d(low, nr, nc);
            break;
        case 3:
            lreenter(low, nr, nc);
            break;
        case 4:
            lsearch(low, nr, nc);
            break;
        case 5:
            lgetel(low, nr, nc);
            break;
        case 6:
            return;
        }
    }
}

void lprint1d(int low[], int nr, int nc)
{
    cout << endl;
    cout << "[ ";
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (i > j)
                cout << low[nc * i + j] << " ";
        }
    }
    cout << "]\n";
}

void lprint2d(int low[], int nr, int nc)
{
    cout << endl;
    for (int i = 0; i < nr; i++)
    {
        cout << " | ";
        for (int j = 0; j < nc; j++)
        {
            if (i > j)
                cout << low[nc * i + j] << " ";
            else
                cout << "* ";
        }
        cout << "|\n";
    }
}

void lreenter(int low[], int nr, int nc)
{
    cout << " For The Lower Triangular Matrix Of Size " << nr << " X " << nc << "\n";
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (i > j)
            {
                cout << " Enter Element A[" << i + 1 << "," << j + 1 << "] : ";
                cin >> low[nc * i + j];
            }
            else
                low[nc * i + j] = 0;
        }
    }
}

void lsearch(int low[], int nr, int nc)
{
    cout << "\n Enter Element To Be Searched : ";
    int el, i, j;
    bool flag = 0;
    cin >> el;
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            if (i > j && el == low[nc * i + j])
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

void lgetel(int low[], int nr, int nc)
{
    cout << " Enter Position To Get Element From : ";
    int pos1, pos2;
    cout << "\n Row : ";
    cin >> pos1;
    cout << " Column : ";
    cin >> pos2;

    if (pos1 <= nr && pos2 <= nc)
    {
        if (pos1 > pos2)
            cout << " Element A[" << pos1 << "," << pos2 << "] Is " << low[nc * pos1 + pos2];
        else
            cout << " Element Not Present At A[" << pos1 << "," << pos2 << "]\n";
    }
    else
        cout << " Wrong Position Entered .. ";
}

#endif /* LOWERTRI_H */
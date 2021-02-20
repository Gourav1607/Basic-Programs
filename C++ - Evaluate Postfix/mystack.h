/* 
 * mystack.h / Evaluate Postfix
 * Author: Gourav Siddhad
 * Created on April 5, 2014, 3:52 PM
 */

#ifndef MYSTACK_H
#define MYSTACK_H
#define SIZE 30
using namespace std;

template <class T>
class mystack
{
private:
    int top;
    T arr[SIZE];

public:
    mystack()
    {
        top = -1;
    }
    bool isempty()
    {
        return top == -1;
    }
    bool isfull()
    {
        return top == (SIZE - 1);
    }
    T topel()
    {
        if (!isempty())
            return arr[top];
        else
            throw 1;
    }
    void clear()
    {
        top = 0;
    }
    T pop();
    void push(T);
    void display();
};

template <class T>
T mystack<T>::pop()
{
    if (!isempty())
        return arr[top--];
    else
        throw 1;
}

template <class T>
void mystack<T>::push(T x)
{
    if (!isfull())
        arr[++top] = x;
    else
        throw 1;
}

template <class T>
void mystack<T>::display()
{
    cout << "\n The Stack Is : \n ";
    if (isempty())
        cout << " Empty";
    else
        while (!isempty())
            cout << pop();
}

#endif /* MYSTACK_H */
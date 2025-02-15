#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define size 4
int top = -1, inp_array[size];
int push();
int pop();
int show();
int main()
{
    int choice;
    int i;
    while (i)
    {
        cout << "\n perform operation on the stack" << endl;
        cout << "\n\nn1.push the element\nn2.pop the element\n 3.show end" << endl;
        cout << "enter the choice:1 to 4" << endl;
        cin >> choice;
    }
    switch (choice)
    {
    case 1:
        push();
        break;

    case 2:
        pop();
        break;

    case 3:
        show();
        break;
    
    case 4:
    exit(0);

    default:
        cout << "invailid choice" << endl;
    }
}
int push()
{
    int y;
    if (top == size - 1)
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "enter the element to be added onto the stack:" << endl;
        cin >> y;
        top = top + 1;
        inp_array[top] = y;
    }
}

int pop()
{
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        cout << inp_array[top] << endl;
        top = top - 1;
    }
}
int show()
{
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        cout << "element present in the stack" << endl;
        for (int i = top; i >= 0; --i)
        {
            cout << inp_array[i] << endl;
        }
    }
    return 0;
}

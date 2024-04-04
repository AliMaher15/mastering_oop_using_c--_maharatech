#include <iostream>
#include <math.h>
#include <conio.h>
#include "Complex.h"
#include "Stack.h"


void viewContent(Stack x)
{
    // copying of pointer will make the pointer
    // of x point to the same address of s
    // and will delete it at the end
    // so s will be missed with

    int t = x.tos; // error if not friend
    while (t > 0)
    {
        std::cout<<x.st[--t]<<std::endl;
    }
    std::cout << "End of viewContent\n";
}

int main()
{
    Stack s(3);
    //
    // statements
    //
    s.push(2); s.push(3); s.push(5);

    viewContent(s);
    s.pop();
    s.push(7);
    s.print();
}
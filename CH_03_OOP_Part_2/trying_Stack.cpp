#include <iostream>
#include <math.h>
#include <conio.h>
#include "Stack.h"

// view content pass-by-values
void viewContent(Stack x)
{
    int t = x.tos; // error if not friend
    while (t != 0)
    {
        std::cout<<x.st[--t]<<std::endl;
    }
    
}

// view content pass-by-ref
void viewContentr(Stack &x)
{
    int t = x.tos; // error if not friend
    while (t != 0)
    {
        std::cout<<x.st[--t]<<std::endl;
    }
    
}

// main function to test
int main()
{
    std::cout<<"Stack Class Test"<<std::endl;

    std::cout<<"Stack Count: "<<Stack::getCounter()<<std::endl;

    Stack s1(2);
    std::cout<<"Stack Count: "<<s1.getCounter()<<std::endl;

    s1.push(5);
    s1.push(14);
    s1.push(20);
    std::cout<<"Popped: "<<s1.pop()<<std::endl;

    Stack s2;
    std::cout<<"Stack Count: "<<s2.getCounter()<<std::endl;

    s2.push(3);
    s2.push(15);
    s2.push(20);
    s2.push(22);

    std::cout<<"S2 Content, pass-by-value: "<<std::endl;
    viewContent(s2);
    std::cout<<"S2 Content, pass-by-ref: "<<std::endl;
    viewContentr(s2);
    // in case of no copy constructor, the pass-by-value has destructed and changed values of s2

    return 0;
}


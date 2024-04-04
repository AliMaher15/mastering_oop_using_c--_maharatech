#include <iostream>
#include <math.h>
#include <conio.h>
#include "Stack.h"

// main function to test
int main()
{
    std::cout<<"Stack Class Test"<<std::endl;

    std::cout<<"Stack Count = "<<Stack::getCounter()<<std::endl;

    Stack s1(2);
    std::cout<<"Stack Count = "<<s1.getCounter()<<std::endl;

    s1.push(5);
    s1.push(14);
    s1.push(20);
    std::cout<<"S1:"<<std::endl;
    s1.print();
    std::cout<<s1.pop()<<std::endl;

    Stack s2;
    std::cout<<"Stack Count = "<<s2.getCounter()<<std::endl;

    s2.push(3);
    s2.push(2);
    s2.push(11);
    s2.push(15);
    s2.push(20);
    std::cout<<"S2:"<<std::endl;
    s2.print();

    Stack s3;
    s3.print();
    std::cout<<"Stack Count = "<<s1.getCounter()<<std::endl;

    return 0;
}


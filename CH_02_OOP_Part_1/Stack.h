#include <iostream>
#include <math.h>
#include <conio.h>

// Name: Stack
/// Atributes:
// size : int
// *st : int, array
// tos : int
/// Functions:
// Stact(int=10)
// ~Stack()
// pop() : int
// push(int) : void

class Stack
{
private:
    int size;
    int *st;
    int tos; // top of stack
    static int counter;
public:
    Stack(int n=10)
    {
        counter++;
        tos = 0;
        size = n;
        st = new int[size]; // allocate memory for pointer array of size = size
        std::cout<<"This is constructor of stack object with size: "<<n<<std::endl;
    }
    ~Stack()
    {
        counter--;
        delete[] st; // delete allocated memory for pointer
        std::cout<<"This is the destructor "<<std::endl;
    };
    static int getCounter()
    {
        return counter;
    };
    int pop();
    void push(int);
    void print();
};
int Stack::counter = 0;

int Stack::pop()
{
    int retVal;
    if (tos==0)
    {
        std::cout<<"Stack is empty"<<std::endl;
        retVal = -1;
    }
    else
    {
        tos--;            // 1. back a step
        retVal = st[tos]; // 2. take value from array
    }
    return retVal;
}

void Stack::push(int n)
{
    if (tos==size)
    {
        std::cout<<"Stack is full"<<std::endl;
    }
    else
    {
        st[tos] = n;  // 1. push value into stack array
        tos++;        // 2. up a step 
    }
    
}

void Stack::print()
{
    for (int i = 0; i < tos; i++)
    {
        std::cout << st[i] << "\t";
    }
    std::cout << "\n";
}
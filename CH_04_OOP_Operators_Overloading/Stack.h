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
    // Constructor
    Stack(int n=10)
    {
        counter++;
        tos = 0;
        size = n;
        st = new int[size];
        std::cout<<"This is constructor of stack object with size: "<<n<<std::endl;
    }
    // Destructor
    ~Stack()
    {
        counter--;
        delete[] st;
        std::cout<<"This is the destructor "<<std::endl;
    };
    // Copy Constructor
    Stack(Stack &z)
    { // passing 2 params(this:new one, z:old one)
        tos = z.tos;
        size = z.size;
        st = new int [size]; // new allocation
        for (int i = 0; i < tos; i++)
        {
            st [i] = z.st [i]; // only copy values
        }
        counter++;
        
    }
    static int getCounter()
    {
        return counter;
    };
    int pop();
    void push(int);
    void print();
    Stack& operator = (const Stack &s); // overload fucntion

friend void viewContent(Stack x);
friend void viewContentr(Stack &x);
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
        tos--;
        retVal = st[tos];
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
        st[tos] = n;
        tos++;
    }
    
}

Stack& Stack::operator=(const Stack &s)
{
    delete[] this->st; //for caller this
    this -> tos = s.tos;
    this -> size = s.size;
    this -> st = new int [size];
    for (int i = 0; i < tos; i++)
    {
        this -> st[i] = s.st[i];
    }
    return *this;
}

void Stack::print()
{
    for (int i = 0; i < tos; i++)
    {
        std::cout << st[i] << "\t";
    }
    std::cout << "\n";
}
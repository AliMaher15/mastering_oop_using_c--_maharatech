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

// 1. use call by reference
void viewContentr(Stack& x)
{
    // the best is call by reference
    // when function ends, the object won't be deleted

    int t = x.tos; // error if not friend
    while (t > 0)
    {
        std::cout<<x.st[--t]<<std::endl;
    }
    std::cout << "End of viewContentr\n";
}
int main()
{
    Stack s(3);
    //
    // statements
    s.push(2); s.push(3); s.push(5);
    //
    viewContentr(s);

    Stack s_copy (s);
    viewContent(s_copy);
}

// 2. Copy Constructor
/// add it in class and manually copy

// when to use copy constructor, 
/// when we pass an object as parameter by values to function
/// when we construct new object from old one
//// Stack s1;
//// Stack s2 (s1);
// Return from function by value
//// Stack getStack() {
////    Stack a;
////    return a;    
////}
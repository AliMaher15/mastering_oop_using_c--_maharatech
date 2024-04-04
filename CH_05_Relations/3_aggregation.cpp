#include <iostream>

// VID03: Aggregation

// strong association
// object of one class "has" an object of the another one
// 2 objects have their own lifecycly and there is one owner at a time
// both can be created and deleted independently

// examples:
/// Room contains many Tables
/// A single Employee can not belong to multiple companies

class Employee {
public:
    Employee() {}
};

class Company {
    Employee * staff;
public:
    Company (Employee *x) {
        staff = x;
    }
};

// difference is that the constructor defines the association

int main()
{
    Employee emp;
    Company c1 (&emp); // a company must have employees
}
// Inheritance part 3

/*
Dynamic Binding
Template Class

// Vid01: need to know
public inheritance only
Derived obj;
Derived *ptr;
obj.m1(); // Derived
obj.Base::m1(); // Base
obj.m2(); // Derived
ptr = &obj; // act as object exactly
ptr -> m1(); // Derived

Derived obj;
Base *ptr;

ptr = &obj; // parent pointer can point at child
but only see the Base part and run Base version
ptr -> m2(); // compilation error

// VID02: Dynamic Binding


// VID03: Virtual Table
built at the compile time for overriding functions
put static binding in it at the compile time
put dynaminc binding at the run time
load the table at run time
the pointer always refers to the last implemented function
for running object in the table
*/



/*
Pure Virtual Function
can not make object from the base class
it is now abstract, only inherit
it is made just to define and inherit

class GeoShape
{
    .
    .
    .
    virtual float calculateArea() = 0;
}
*/


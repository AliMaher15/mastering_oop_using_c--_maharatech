#include <iostream>
#include <math.h>
#include <conio.h>

// add default value in function
int sum(int x, int y, int z=0, int m=0) {
    int s;
    s = x+y+z+m;
    return s;
}

int main() {
    std::cout << sum(1,2,3,4) << std::endl;
    std::cout << sum(1,2,3) << std::endl;
    std::cout << sum(1,2) << std::endl;      
    // if didnt define default for z: error, make z=0
    //sum(1,2, ,4); // error can't make a gap
}
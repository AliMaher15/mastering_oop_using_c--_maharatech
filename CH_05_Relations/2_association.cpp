#include <iostream>

// Relations
/// static allocation
/// dynamic allocation
/// association
/// aggregation
/// composition

// VID02: Association

// Assosiation:
/// is a relation between two classes
/// allows one object to use another to perform an action on its behalf
/// two objects have their own lifecycle and there is no owner
/// both can be created and deleted independently

// examples:
/// Students are "on waiting list" for a seminar
/// professors "instruct" a seminar
/// seminar is an "offering" of courses

// Seminar => Course
// seminar use course
// can put numbers Seminar 0..1 => n Course
// one seminar can offer 1 or more (n) courses



class Course {
public:    
    Course() {}
};

class Seminar {
    Course *x;
public:
    Seminar() {}
    void offer (Course *C) {}
};

int main() {
    Course c1;
    Seminar s1; // a seminar can have 0 courses
    s1.offer(&c1);
}
#include <iostream>

// VID04: Composition

// strong aggregation
// part object does not have its own lifecycle
// if the whole object gets deleted, all of its parts will also deleted
// use normal member variables
// can use pointer values if the composition class automatically handle allocation/de-allocation

/// house contains multiple rooms
/// any room can not be belong to two houses
/// if we delete the house, all rooms will be deleted

class Room {
public:
    Room() {std::cout<<"Room is constructed"<<std::endl;}
    ~Room() {std::cout<<"Room is destructed"<<std::endl;}
};

class House {
    Room * rlist;
    Room   mainRoom;
public:
    House():mainRoom() {
        std::cout<<"Constructing House Rooms"<<std::endl;
        rlist = new Room[4];
    }
};

int main() {
    // when house constructed, rooms constructed
    House H;
    // when house deleted, room will be deleted
}
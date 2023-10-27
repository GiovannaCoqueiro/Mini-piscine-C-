#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>
#include "Person.hpp"

class Person;

class Room {
    private:
        long long ID;
        std::vector<Person *> _occupants;

    public:
        Room() {}
        Room(int id) : ID(id) {}
        ~Room() {}
        bool canEnter(Person *);
        void enter(Person *);
        void exit(Person *);
        void printOccupant();
        long long getID() const { return ID; }
};

#endif

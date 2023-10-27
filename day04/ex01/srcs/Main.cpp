#include "Singleton.hpp"
#include "Lists.hpp"
#include "Course.hpp"
#include "Room.hpp"
#include "Staff.hpp"
#include "Student.hpp"
#include "Person.hpp"
#include <iostream>

int main() {
    Student student1("Gi");
    Student student2("Bea");
    Student student3("Pedro");

    StudentList::getInstance()->addToList(&student1);
    StudentList::getInstance()->addToList(&student2);
    StudentList::getInstance()->addToList(&student3);

    Staff staff1;
    Staff staff2;

    StaffList::getInstance()->addToList(&staff1);
    StaffList::getInstance()->addToList(&staff2);

    Course course1("C++", 20);
    Course course2("Python", 25);

    CourseList::getInstance()->addToList(&course1);
    CourseList::getInstance()->addToList(&course2);

    Room room1(1);
    Room room2(2);

    RoomList::getInstance()->addToList(&room1);
    RoomList::getInstance()->addToList(&room2);

    std::vector<Student *> students = StudentList::getInstance()->wholeList();

    std::cout << "StudentsList" << std::endl;
    for (size_t i = 0; i < StudentList::getInstance()->wholeList().size(); ++i) {
        std::cout << "Student: " << students[i]->getName() << std::endl;
    }

    std::cout << std::endl;

    std::vector<Staff *> staffs = StaffList::getInstance()->wholeList();
    std::cout << "StaffList" << std::endl;
    for (size_t i = 0; i < staffs.size(); ++i) {
        std::cout << "Staff: " << &staffs[i] << std::endl;
    }

    std::cout << std::endl;

    std::vector<Course *> courses = CourseList::getInstance()->wholeList();
    std::cout << "CourseList" << std::endl;
    for (size_t i = 0; i < CourseList::getInstance()->wholeList().size(); ++i) {
        std::cout << "Course: " << courses[i]->getName() << std::endl;
    }

    std::cout << std::endl;

    std::vector<Room *> rooms = RoomList::getInstance()->wholeList();
    std::cout << "RoomList" << std::endl;
    for (size_t i = 0; i < RoomList::getInstance()->wholeList().size(); ++i) {
        std::cout << "Room: " << rooms[i]->getID() << std::endl;
    }
}

#include "Singleton.hpp"
#include "Lists.hpp"
#include "Course.hpp"
#include "Room.hpp"
#include "Staff.hpp"
#include "Student.hpp"

#include <iostream>

int main() {
    StudentList::getInstance()->addToList(new Student("Gi"));
    StudentList::getInstance()->addToList(new Student("Bea"));

    StaffList::getInstance()->addToList(new Staff());
    StaffList::getInstance()->addToList(new Staff());

    CourseList::getInstance()->addToList(new Course("C++"));
    CourseList::getInstance()->addToList(new Course("Python"));

    RoomList::getInstance()->addToList(new Room());
    RoomList::getInstance()->addToList(new Room());
    

    Student *student = StudentList::getInstance()->accessList(0);
    std::cout << "Student: " << student->getName() << std::endl;

    std::vector<Student *> students = StudentList::getInstance()->wholeList();
    
    for (size_t i = 0; i < students.size(); ++i) {
        std::cout << "Student: " << students[i]->getName() << std::endl;
    }

    bool deletado = StudentList::getInstance()->retrieveFromList(0);

    if (deletado) {
        std::cout << "Student deleted" << std::endl;

    }
    std::cout << "***************StudentsList************************" << std::endl;
    for (size_t i = 0; i < StudentList::getInstance()->wholeList().size(); ++i) {
        std::cout << "Student: " << students[i]->getName() << std::endl;
    }

    std::vector<Staff*> staffs = StaffList::getInstance()->wholeList();
    std::cout << "***************StaffList************************" << std::endl;
    for (size_t i = 0; i < staffs.size(); ++i) {
        std::cout << "Staff: " << &staffs[i] << std::endl;
    }

    std::vector<Course*> courses = CourseList::getInstance()->wholeList();
    std::cout << "***************CourseList************************" << std::endl;
    for (size_t i = 0; i < CourseList::getInstance()->wholeList().size(); ++i) {
        std::cout << "Course: " << courses[i]->getName() << std::endl;
    }

    std::vector<Room*> rooms = RoomList::getInstance()->wholeList();
    std::cout << "***************RoomList************************" << std::endl;
    for (size_t i = 0; i < RoomList::getInstance()->wholeList().size(); ++i) {
        std::cout << "Room: " << &rooms[i] << std::endl;
    }
}

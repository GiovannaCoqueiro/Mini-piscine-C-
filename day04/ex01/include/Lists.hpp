#ifndef LISTS_HPP
#define LISTS_HPP

#include "Singleton.hpp"
#include "Course.hpp"
#include "Room.hpp"
#include "Student.hpp"
#include "Staff.hpp"

class StudentList : public Singleton<Student> {
};

class StaffList : public Singleton<Staff> {
};

class RoomList : public Singleton<Room> {
};

class CourseList : public Singleton<Course> {
};

#endif
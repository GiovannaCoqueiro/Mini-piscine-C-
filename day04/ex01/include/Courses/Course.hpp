#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include <vector>
#include "Student.hpp"
#include "Professor.hpp"

class Student;
class Professor;

class Course {
    private:
        std::string _name;
        Professor *_responsable;
        std::vector<Student *> _students;
        int _numberOfClassToGraduate;
        int _maximumNumberOfStudent;

    public:
        Course() {}
        Course(std::string p_name, int maximumStudents) : _name(p_name), _responsable(NULL), _numberOfClassToGraduate(0), _maximumNumberOfStudent(maximumStudents) {}
        ~Course() {}
        void assign(Professor *p_professor);
        void subscribe(Student *p_student);
        std::string getName() const { return _name; }
        int getNumberOfClassesToGraduate() const { return _numberOfClassToGraduate; }
        void setNumberOfClassesToGraduate(int value) { _numberOfClassToGraduate = value; }
};

#endif

#include "Course.hpp"
#include "Professor.hpp"
#include "Student.hpp"

void Course::assign(Professor *p_professor) {
    _responsable = p_professor;
}

void Course::subscribe(Student *p_student) {
    if (_students.size() < _maximumNumberOfStudent) {
        _students.push_back(p_student);
    }
}
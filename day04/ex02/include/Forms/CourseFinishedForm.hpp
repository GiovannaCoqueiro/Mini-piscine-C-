  #ifndef COURSEFINISHEDFORM_HPP
#define COURSEFINISHEDFORM_HPP

#include "Form.hpp"
#include <iostream>

class CourseFinishedForm : public Form {
private:

public:
    void execute();
    CourseFinishedForm();
    void fillForm();
    std::string  getFormTitle() const;
};

#endif
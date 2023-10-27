#include "CourseFinishedForm.hpp"
#include <iostream>

CourseFinishedForm::CourseFinishedForm() : Form(FormType::CourseFinished) {
}

void CourseFinishedForm::execute() {

    if (CourseFinishedForm::isSigned()) {
        std::cout << "Course finished form signed" << std::endl;
    } else {
        std::cout << "Course finished form not signed" << std::endl;
    }
}

void CourseFinishedForm::fillForm() {
    title = "Course Finished Form";
}

std::string CourseFinishedForm::getFormTitle() const {
    return title;
}
#include "NeedCourseCreationForm.hpp"
#include <iostream>

NeedCourseCreationForm::NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {
}

void NeedCourseCreationForm::execute() {
    if (NeedCourseCreationForm::isSigned()) {
        std::cout << "Need course creation form signed" << std::endl;
    
    } else {
        std::cout << "Need course creation form not signed" << std::endl;
    }
}
void NeedCourseCreationForm::fillForm() {
   
    title = "Need Course Creation Form";
}

std::string NeedCourseCreationForm::getFormTitle() const {
    return title;
}
#include "NeedMoreClassRoomForm.hpp"
#include <iostream>

NeedMoreClassRoomForm::NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {
}

void NeedMoreClassRoomForm::execute() {
     if (NeedMoreClassRoomForm::isSigned()) {
        std::cout << "Need more classroom form signed" << std::endl;
    } else {
        std::cout << "Need more classroom form not signed" << std::endl;
    }
}

void NeedMoreClassRoomForm::fillForm() {
    title = "Need More Class Room Form";
}

std::string NeedMoreClassRoomForm::getFormTitle() const {
    return title;
}
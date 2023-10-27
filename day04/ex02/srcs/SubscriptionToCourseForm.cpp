#include "SubscriptionToCourseForm.hpp"
#include <iostream>

SubscriptionToCourseForm::SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {
}

void SubscriptionToCourseForm::execute() {
     if (SubscriptionToCourseForm::isSigned()) {
        std::cout << "Subscription to course form signed" << std::endl;
    } else {
        std::cout << "Subscription to course form not signed" << std::endl;
    } 
}

void SubscriptionToCourseForm::fillForm() {

    title = "Subscription To Course Form";
}

std::string SubscriptionToCourseForm::getFormTitle() const {
    return title;
}

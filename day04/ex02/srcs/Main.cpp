#include "Headmaster.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Secretary.hpp"
#include "Headmaster.hpp"

int main() {
    Headmaster headmaster;
    Secretary secretary;

    Form *subscriptionForm = secretary.createForm(FormType::SubscriptionToCourse);
    Form *needCourseCreationForm = secretary.createForm(FormType::NeedCourseCreation);
    Form *needMoreClassRoom = secretary.createForm(FormType::NeedMoreClassRoom);
    Form *courseFinishedForm = secretary.createForm(FormType::CourseFinished);

    Form *courseFinishedForm2 = secretary.createForm(FormType::CourseFinished);

    courseFinishedForm2->execute();

    subscriptionForm->fillForm();
    needCourseCreationForm->fillForm();
    needMoreClassRoom->fillForm();
    courseFinishedForm->fillForm();

    headmaster.receiveForm(subscriptionForm);
    headmaster.receiveForm(needCourseCreationForm);
    headmaster.receiveForm(needMoreClassRoom);
    headmaster.receiveForm(courseFinishedForm);

    for (size_t i = 0; i < headmaster.getFormsToValidate().size(); ++i) {
        Form *form = headmaster.getFormsToValidate()[i];
        headmaster.execute(form);
        std::cout << "Form : " << form->getFormTitle() << std::endl;
        std::cout << std::endl;
    }
}
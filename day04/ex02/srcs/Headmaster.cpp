#include "Headmaster.hpp"
#include "Form.hpp"
#include <vector>

void Headmaster::receiveForm(Form *p_form) {
    if (p_form) {
        _formToValidate.push_back(p_form);
    }
}

void Headmaster::execute(Form *form) {
    if (form) {
        form->toSign(true);
        form->execute();
    }
}

std::vector<Form *> Headmaster::getFormsToValidate() {
    return _formToValidate;
}

#ifndef SECRETARY_HPP
#define SECRETARY_HPP

#include "Staff.hpp"
#include "Form.hpp"
#include "FormType.hpp"

class Staff;
class Form;
enum class FormType;

class Secretary : public Staff {
public:
    Form *createForm(FormType p_formType);
    void archiveForm(Form *form);
};

#endif

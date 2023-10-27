#ifndef SECRETARY_HPP
#define SECRETARY_HPP

#include "Staff.hpp"
#include "Form.hpp"

class Secretary : public Staff {
public:
    Secretary() {}
    ~Secretary() {}
    Form *createForm(FormType p_formType);
    void archiveForm(Form *form);
};

#endif
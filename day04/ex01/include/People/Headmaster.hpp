#ifndef HEADMASTER_HPP
#define HEADMASTER_HPP

#include<vector>
#include "Staff.hpp"
#include "Form.hpp"

class Form;
class Staff;

class Headmaster : public Staff {
    private:
        std::vector<Form *> _formToValidate;

    public:
        void receiveForm(Form *p_form);
};

#endif

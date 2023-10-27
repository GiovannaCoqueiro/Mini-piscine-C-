#ifndef FORM_HPP
#define FORM_HPP

#include "FormType.hpp"

enum class FormType; 

class Form {
    private:
        FormType _formType;

    public:
        Form() {}
        Form(FormType p_formType) { _formType = p_formType; }
        ~Form() {}
        virtual void execute() = 0;
};

#endif
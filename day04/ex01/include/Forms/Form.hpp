#ifndef FORM_HPP
#define FORM_HPP

#include "FormType.hpp"

enum class FormType; 

class Form {
    private:
        FormType _formType;

    public:
        Form(FormType p_formType) { _formType = p_formType; }
        virtual void execute() = 0;
};

#endif
#ifndef FORM
#define FORM

#include "FormType.hpp"

class FormType;

class Form {
	private:
		FormType _formType;

	public:
		Form(FormType p_formType)
		{

		}

		virtual void execute() = 0;
};

#endif
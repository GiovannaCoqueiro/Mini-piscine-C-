#ifndef FORM_HPP
#define FORM_HPP

#include "FormType.hpp"
#include <iostream>

class Form {
	private:
		FormType _formType;

	protected:
		bool sign;
		void toSign(bool sign);
		std::string title;

	public:
		Form(FormType p_formType) { _formType = p_formType; }
		~Form() {}
		virtual void execute() = 0;
		bool isSigned();
		virtual void fillForm() = 0;
		std::string  getFormTitle() const ;

    friend class Headmaster;
};

#endif

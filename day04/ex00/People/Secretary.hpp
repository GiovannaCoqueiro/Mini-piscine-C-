#ifndef SECRETARY_HPP
#define SECRETARY_HPP

#include "Staff.hpp"
#include "Form.hpp"
#include "FormType.hpp"

class Form;
class Staff;
class FormType;

class Secretary : public Staff {
	private:

	public:
		Form* createForm(FormType p_formType);
		void archiveForm();
};

#endif
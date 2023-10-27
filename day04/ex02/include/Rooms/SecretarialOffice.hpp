#ifndef SECRETARIAL_OFFICE_HPP
#define SECRETARIAL_OFFICE_HPP

#include <vector>
#include "Room.hpp"
#include "Form.hpp"

class Room;
class Form;

class SecretarialOffice: public Room {
	private:
		std::vector<Form *> _archivedForms;

	public:

};

#endif
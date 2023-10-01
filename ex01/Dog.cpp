#include "Dog.hpp"

//*********************************************************************//
//----------------------- Constuctors & Destructors -------------------//
//*********************************************************************//

Dog::Dog(std::string breed) : Animal("Dog"), _breed(breed), _sound("Woof woof") {
	print_line(_breed, " Dog constructor called!");
}

Dog::Dog() : Animal("Dog"), _breed("Not specified"), _sound("Woof woof") {
	print_line(_breed, " Dog constructor called!");
}

Dog::Dog(const Dog &ref) : Animal(ref) {}

Dog& Dog::operator=(const Dog &ref) {
	if (this != &ref) {
		this->_type = ref._type;
		this->_breed = ref._breed;
	}
	return *this;
}

Dog::~Dog() {
	print_line("Dog destructor called!");
}


//*********************************************************************//
//----------------------- Puclic main member functions ----------------//
//*********************************************************************//

void	Dog::makeSound() const {
	print_line(this->_sound);
}

//*********************************************************************//
//----------------------- Puclic Add on member functions --------------//
//*********************************************************************//

//*********************************************************************//
//----------------------- Add on member functions ---------------------//
//*********************************************************************//
















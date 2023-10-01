#include "Animal.hpp"

//*********************************************************************//
//----------------------- Constuctors & Destructors -------------------//
//*********************************************************************//

Animal::Animal(std::string type) : _type(type) {
	print_line("Animal constructor called!");
}

Animal::Animal() : _type("Not specified") {
	print_line("Animal constructor called!");
}

Animal::Animal(const Animal &ref) {
	*this = ref;
}

Animal& Animal::operator=(const Animal &ref) {
	if (this != &ref) {
		this->_type = ref._type;
	}
	return *this;
}

Animal::~Animal() {
	print_line("Animal destructor called!");
}


//*********************************************************************//
//----------------------- Puclic main member functions ----------------//
//*********************************************************************//

void	Animal::makeSound() const {
	print_line("Animal sound called!");
}


void	Animal::makeSound(Animal *ptr) const{
	ptr->makeSound();
}

std::string	Animal::getType() const{
	return this->_type;
}


//*********************************************************************//
//----------------------- Puclic Add on member functions --------------//
//*********************************************************************//

//write your code here


//*********************************************************************//
//----------------------- Add on member functions ---------------------//
//*********************************************************************//

void	print_line(std::string s) {
	std::cout << s << std::endl;
}

void	print_line(std::string s1, std::string s2) {
	std::cout << s1 << s2 << std::endl;
}

void	print_line() {
	std::cout << std::endl;
}

void	print(std::string s) {
	std::cout << s;
}

void	print(std::string s1, std::string s2) {
	std::cout << s1 << s2;
}









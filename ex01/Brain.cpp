#include "Brain.hpp"

Brain::Brain() {
	print_line("Brain constructor called!");
}

Brain::Brain(const Brain &ref) {
	*this = ref;
}

Brain& Brain::operator=(const Brain &ref) {
	if (this != &ref) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = ref._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	print_line("Brain destructor called!");
}
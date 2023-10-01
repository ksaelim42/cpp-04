#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
private:
	std::string			_breed;
	const std::string	_sound;
public:
	Cat(std::string breed);
	Cat();
	Cat(const Cat &ref);
	Cat& operator=(const Cat &ref);
	~Cat();

	void	makeSound() const;
};

#endif
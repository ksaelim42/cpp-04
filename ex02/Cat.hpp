#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	std::string			_breed;
	const std::string	_sound;
	Brain				*_brain;
public:
	Cat(std::string breed);
	Cat();
	Cat(const Cat &ref);
	Cat& operator=(const Cat &ref);
	~Cat();

	void	makeSound() const;
};

#endif
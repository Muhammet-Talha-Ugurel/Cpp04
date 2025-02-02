#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = src.getType();
}

Animal &Animal::operator=(const Animal &src)
{
	// std::cout << "Animal assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound!?" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Default Animal destructor called" << std::endl;
}
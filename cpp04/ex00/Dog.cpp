#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "The dog class is called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "woof, woof." << std::endl;
}

Dog::~Dog() {
	std::cout << "The dog class has been destroyed." << std::endl;
}
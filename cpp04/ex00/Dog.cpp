#include "Dog.hpp"

Dog::Dog(std::string type) {
	this->type = type;
	std::cout << "The dog class is called." << std::endl;
}

void Dog::makeSound() {
	std::cout << "woof, woof." << std::endl;
}

Dog::~Dog() {
	std::cout << "The dog class has been destroyed." << std::endl;
}
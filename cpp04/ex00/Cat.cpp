#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "The cat class is called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow, meow." << std::endl;
}

Cat::~Cat() {
	std::cout << "The cat class has been destroyed." << std::endl;
}
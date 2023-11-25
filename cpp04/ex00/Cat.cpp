#include "Cat.hpp"

Cat::Cat(std::string type) {
	this->type = type;
	std::cout << "The cat class is called." << std::endl;
}

void Cat::makeSound() {
	std::cout << "meow, meow." << std::endl;
}

Cat::~Cat() {
	std::cout << "The cat class has been destroyed." << std::endl;
}
#include "Animal.hpp"

Animal::Animal() {
	std::cout << "The animal class is called." << std::endl;
}

void Animal::makeSound() {
	std::cout << "Empty" << std::endl;
}

Animal::~Animal() {
	std::cout << "The animal class has been destroyed." << std::endl;
}
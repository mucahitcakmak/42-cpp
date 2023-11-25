#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(std::string type);
		void makeSound();
		~Cat();
};

#endif
#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		void makeSound() const;
		~Dog();
};

#endif
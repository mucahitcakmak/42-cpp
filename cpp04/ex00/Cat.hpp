#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		void makeSound() const;
		~Cat();
};

#endif
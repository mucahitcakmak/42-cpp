#ifndef FRAGTRAP_HPP
#define FRAGMTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        FragTrap &operator = (const FragTrap &cpy);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif
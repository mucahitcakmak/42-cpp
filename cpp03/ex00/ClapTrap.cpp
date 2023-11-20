#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->name = "name";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Class created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "A class that takes a name parameter has been created." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    } else
        std::cout << this->name << " has no energy or hit points left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints > 0) {
        std::cout << this->name << " took " << amount << " points of damage." << std::endl;
        this->hitPoints -= amount;
    }
    else
        std::cout << this->name << " is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        std::cout << this->name << " repaired itself and got " << amount << " points." << std::endl;
        this->hitPoints += amount;
        this->energyPoints -= 1;
    } else
        std::cout << this->name << " has no energy or hit points left." << std::endl;
}
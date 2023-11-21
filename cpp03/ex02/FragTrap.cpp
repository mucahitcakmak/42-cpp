#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->name = "name";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap class created." << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap class that takes a name parameter has been created." << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap: Would you like a high five?" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap class removed." << std::endl;
}
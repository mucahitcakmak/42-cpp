#include "HumanB.hpp"

HumanB::HumanB(string name) : name(name) {};

HumanB::HumanB(string name, Weapon &weapon) : name(name), weapon(&weapon) {};

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
};

void HumanB::attack() {
    cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}
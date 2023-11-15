#include "Zombie.hpp"

Zombie::Zombie() {
    name = "";
}

Zombie::Zombie(string name) {
    this->name = name;
}

Zombie::~Zombie() {
    cout << name << " is dead." << endl;
}

void Zombie::announce() {
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name) {
    this->name = name;
}
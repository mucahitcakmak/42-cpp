#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        string name;
        Weapon *weapon;
    public:
        HumanB(string name);
        HumanB(string name, Weapon &weapon);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif
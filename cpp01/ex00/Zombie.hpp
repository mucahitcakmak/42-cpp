#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Zombie {
    private:
        string name;
    public:
        Zombie();
        Zombie(string name);
        ~Zombie();
        void announce();
};

Zombie  *newZombie(string name);
void    randomChump(string name);

#endif
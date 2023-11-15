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
        void setName(string name);
};

Zombie* zombieHorde(int N,string name);

#endif
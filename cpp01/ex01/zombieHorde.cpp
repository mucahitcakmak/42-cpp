#include "Zombie.hpp"

Zombie* zombieHorde(int N,string name) {
    Zombie *zomZom = new Zombie[N];
    for (int i = 0; i < N; i++)
		zomZom[i].setName(name);
    return (zomZom);
}
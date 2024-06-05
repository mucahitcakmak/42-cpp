#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cstdlib>

class PmergeMe {
    private:
        std::list<int> lst;
        std::vector<int> vector;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &cpy);
        PmergeMe &operator = (const PmergeMe &cpy);

        void check_and_fill(int ac, char **av);
        void run(int ac, char **av);
        void sort();
        
        ~PmergeMe();
};

#endif
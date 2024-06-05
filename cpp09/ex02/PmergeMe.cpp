#include "PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe &cpy) {
    if (this != &cpy) {
        this->lst = cpy.lst;
        this->vector = cpy.vector;
    }
}

PmergeMe &PmergeMe::operator = (const PmergeMe &copy) {
    (void)copy;
    return *this;
}

PmergeMe::~PmergeMe() { }

void exit_program() {
    std::cout << "Error\n";
    exit(1);
}

void is_number(std::string value) {
    for (int i = 0; i < (int)value.length(); i++) {
        if (!(value[i] >= '0' && value[i] <= '9'))
            exit_program();
    }
}

int ft_stoi(std::string str) {
    int i = 0;
    int num = 0;
    int isNegative = 0;

    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            isNegative = 1;
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i++] - '0');
    }
    if (isNegative)
        num *= -1;
    return (num);
}


void PmergeMe::check_and_fill(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        is_number(av[i]);
        int value = ft_stoi(av[i]);
        if (value < 1)
            exit_program();
        std::cout << "G. Sayı: " << value << std::endl;
        // İki containere değerler yüklenecek
    }   
}

void PmergeMe::sort() {

}

void PmergeMe::run(int ac, char **av) {
        check_and_fill(ac, av);
        sort();
}
#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        return (1);
    ScalarConverter convert;

    std::string arg = av[1];
    convert.findType(arg);
}
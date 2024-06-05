#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class RPN {
    private:
        std::stack<int> stack;
    public:
        int is_operator(char c);
        void run(std::string str);
};

#endif
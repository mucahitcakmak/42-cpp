#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int len;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int len);
        Span(const Span &cpy);
		Span& operator = (Span const &cpy);

        void addNumber(int nbr);

        ~Span();
};

#endif
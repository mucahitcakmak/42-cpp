#include "Span.hpp"

Span::Span() {
    this->len = 0;
}

Span::Span(unsigned int len) {
    this->len = len;
}

Span::Span(const Span &cpy) {
    if (this != &cpy) {
        this->len = cpy.len;
        this->vec = cpy.vec;
    }
}

Span &Span::operator = (Span const &cpy) {
    if (this != &cpy) {
        this->len = cpy.len;
        this->vec = cpy.vec;
    }
    return (*this);
}

void Span::addNumber(int nbr) {
    try {
        if (this->vec.size() != this->len)
            this->vec.push_back(nbr);
        else
            throw (std::runtime_error("There is no more space on the list!"));
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

Span::~Span() {}
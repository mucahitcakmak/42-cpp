#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int execGrade;
    public:
        Form();
        Form(std::string n, int sg, int eg);
        Form(const Form &cpy);
        std::string getName() const;
        int getGrade() const;
		Form& operator = (Form const &cpy);
        // besigned ve signForm kaldı
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            const char* what() const throw();
        };
        ~Form();
};

std::ostream &operator << (std::ostream &output, const Form &f);

#endif
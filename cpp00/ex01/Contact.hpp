#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

class Contact {
    private:
        string  name;
        string  surname;
        string  nickname;
        string  phone_number;
        string  dark_secret;
    public:
        Contact();
        void set_contact(string n, string sn, string nn, string pn, string ds);
        string get_name();
        string get_surname();
        string get_nickname();
        string get_phoneNumber();
        string get_darkestSecret();
};

#endif
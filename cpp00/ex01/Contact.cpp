#include "Contact.hpp"

Contact::Contact() {
	name = "";
	surname = "";
	nickname = "";
	phone_number = "";
	dark_secret = "";
}

void    Contact::set_contact(string n, string sn, string nn, string pn, string ds)
{
    Contact::name = n;
    Contact::surname = sn;
    Contact::nickname = nn;
    Contact::phone_number = pn;
    Contact::dark_secret = ds;
}

string Contact::get_name() {
    return (name);
}

string Contact::get_surname() {
    return (surname);
}

string Contact::get_nickname() {
    return (nickname);
}

string Contact::get_phoneNumber() {
    return (phone_number);
}

string Contact::get_darkestSecret() {
    return (dark_secret);
}
#include "PhoneBook.hpp"

int main() {
    string      input;
    PhoneBook   pb;

    while (1) {
        cout << "> ";
        getline(cin, input);
        if (input.empty())
            continue;
        if ("ADD" == input)
            pb.addContact();
        else if ("SEARCH" == input)
            pb.searchContact();
        else if ("EXIT" == input)
            return (0);
        else
            cout << "Please enter one of the commands: ADD, SEARCH or EXIT." << endl;
    }
}
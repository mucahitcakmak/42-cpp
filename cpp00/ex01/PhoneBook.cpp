#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    id = 0;
}

string    getContactInfo(string str, string input) {
    while (1) {
        cout << str;
        getline(cin, input);
        if (input.empty())
            continue ;
        else
            break ;
    }
    return (input);
}

int     checkPhoneNumber(string pn) {
    int i = -1;
    int isCorrect = 0;

    while (pn[++i])
        if (!(pn[i] >= '0' && pn[i] <= '9'))
            isCorrect = 1;
    if (isCorrect)
        cout << "--- Phone number can only take numerical values! ---" << endl;
    return (isCorrect);
}

void    PhoneBook::addContact() {
    string  n, sn, nn, pn, ds;

    while (1) {
        n = getContactInfo("Name: ", n);
        sn = getContactInfo("Surname: ", sn);
        nn = getContactInfo("Nickname: ", nn);
        pn = getContactInfo("Phone Number: ", pn);
        if (checkPhoneNumber(pn))
            continue;
        ds = getContactInfo("Darkest Secret: ", ds);
        break;
    }
    contacts[id++].set_contact(n, sn, nn, pn, ds);
    if (id == 8)
        id = 7;
    cout << "--- Contact added to phone book ---" << endl;
}

void    printTableHeaders() {
    cout << "        Id";
    cout << "|" << "      Name";
    cout << "|" << "   Surname";
    cout << "|" << "  Nickname" << "|" << endl;
    for (int i = 0;i < 44;i++)
        cout << "-";
    cout << endl;
}

void    writeString(string str) {
    if (str.length() > 10) {
        cout << setw(9) << str.substr(0, 9) << ".|";
    } else
        cout << setw(10) << str << "|";
}

int checkSearchId(string searchIn) {
    int i = -1;
    int isCorrect = 0;

    while (searchIn[++i])
        if (!(searchIn[i] >= '1' && searchIn[i] <= '8'))
            isCorrect = 1;
    if (searchIn.length() > 1)
        isCorrect = 1;
    return (isCorrect);
}

int ft_stoi(string str) {
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

void    PhoneBook::searchContact() {
    printTableHeaders();

    for (int i = 0; i < 8; i++) {
        cout << setw(10) << i + 1 << "|";
        writeString(contacts[i].get_name());
        writeString(contacts[i].get_surname());
        writeString(contacts[i].get_nickname());
        cout << endl;
    }

    string  searchIndex;
    int     index;
    while (1) {
        cout << "Enter the ID of the person you are calling > ";
        getline(cin, searchIndex);
        if (searchIndex.empty() || checkSearchId(searchIndex))
            continue;
        index = ft_stoi(searchIndex) - 1;
        cout << "Id: " << index + 1 << endl;
        cout << "Name: " << contacts[index].get_name() << endl;
        cout << "Surname: " << contacts[index].get_surname() << endl;
        cout << "Nickname: " << contacts[index].get_nickname() << endl;
        cout << "Phone Number: " << contacts[index].get_phoneNumber() << endl;
        cout << "Darkest Secret: " << contacts[index].get_darkestSecret() << endl;
        break;
    }
}

#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << "string address: " << &str << endl;
    cout << "stringPTR address: " << stringPTR << endl;
    cout << "stringREF address: " << &stringREF << endl;
    cout << endl;

    cout << "string value: " << str << endl;
    cout << "stringPTR value: " << *stringPTR << endl;
    cout << "stringREF value: " << stringREF << endl;
}
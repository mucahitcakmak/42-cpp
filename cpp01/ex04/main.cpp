#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::find;
using std::string;

// --------------- Tamamlanmadı !! ---------

int main(int ac, char **argv) {
    if (ac != 4) {
        cout << "You must enter 4 arguments." << endl;
        return (1);
    }

    string s1 = argv[2];
    string s2 = argv[3];

    std::ifstream infile(argv[1]);
    string lines;
    string line;
    if (infile.is_open()) {
        while (std::getline(infile, line)) {
            line.find(s1);
            lines += line + '\n';
        }
    }
}

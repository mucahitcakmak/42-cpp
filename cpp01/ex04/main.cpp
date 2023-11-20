#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::find;
using std::string;

int main(int ac, char *argv[]) {
    if (ac != 4) {
        cout << "You must enter 4 arguments." << endl;
        return (1);
    }

    std::ifstream infile(argv[1]);
    std::ofstream outfile((string(argv[1]) + ".replace").c_str());

    string s1 = argv[2];
    string s2 = argv[3];

    int    findIn;
    string lines;
    string line;
    if (infile.is_open()) {
        while (std::getline(infile, line)) {
            findIn = line.find(s1);
            while (findIn != -1) {
                findIn = line.find(s1);
                if (findIn != -1) {
                    line.erase(findIn, s1.length());
                    line.insert(findIn, s2);
                }
            }
            lines += line + '\n';
        }
        infile.close();
        outfile << lines;
    }
}

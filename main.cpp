#include <iostream>
#include <fstream>
#include "lib.h"

using namespace std;

int main() {
    ifstream f("C:/myfiles/MyClionProjects/delenie/file_delenie");
    string a1,b1;
    getline(f,a1);
    getline(f,b1);

    try {
        cout << delenie(a1, b1);
    }
    catch(char const *err)
    {
        cout << err;
    }
    return 0;
}

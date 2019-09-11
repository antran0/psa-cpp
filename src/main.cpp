#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 3 || argc > 4) {
        std::cerr << "usage: " << argv[0]
            << " <input file containing both s1 and s2>"
            << " <0: global, 1: local>"
            << " [path to parameters config file]"
            << std::endl;
    }
}

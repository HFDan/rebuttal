#include <fstream>

std::ifstream test_input("text.txt");

int main(int argc, char** argv) {
    int a;
    test_input >> a;

    return 0;
}

#include <fstream>

int main(int argc, char** argv) {
    std::ifstream test_input("text.txt");
    int a;
    test_input >> a;

    return 0;
}

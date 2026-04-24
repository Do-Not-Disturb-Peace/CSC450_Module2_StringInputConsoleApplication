#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    for (int i = 0; i < 3; ++i) {
        std::cout << "First: ";
        std::getline(std::cin, str1);

        std::cout << "Second: ";
        std::getline(std::cin, str2);

        std::string result = str1 + str2;

        std::cout << "Concatenated result: " << result << std::endl;
    }

    return 0;
}

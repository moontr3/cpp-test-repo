#include <iostream>

int main() {
    int height;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> height;

    for (int i=0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
#include <iostream>

int main() {
    std::cout << "Los numeros impares en orden descendente entre 1 y 100 son:" << std::endl;
    for (int i = 100; i >= 1; i--) {
        if (i % 2 != 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

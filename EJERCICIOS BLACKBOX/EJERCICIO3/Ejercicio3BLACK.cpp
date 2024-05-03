#include<iostream>

int main() {
    int n = 100;
    int sum = (n * (n + 1) * (2 * n + 1)) / 6;

    std::cout << "The sum of the squares of the numbers between 1 and " << n << " is: " << sum << std::endl;

    return 0;
}
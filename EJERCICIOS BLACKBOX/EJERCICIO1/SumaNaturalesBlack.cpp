#include<iostream>

int main() {
    int n;
    std::cout << "Enter a natural number: ";
    std::cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
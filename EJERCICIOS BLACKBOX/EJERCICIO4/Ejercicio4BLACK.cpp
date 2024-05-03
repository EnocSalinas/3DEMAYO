#include<iostream>

int main() {
    int sum = 0;
    for(int i = 1; i <= 10; i++) {
        int grade;
        std::cout << "Enter the grade of student " << i << ": ";
        std::cin >> grade;

        sum += grade;
    }

    double average = static_cast<double>(sum) / 10;

    std::cout << "The general average of the section is: " << average << std::endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    
    // Loop through numbers from 100 to 200
    for (int num = 100; num <= 200; num++) {
        // Check if the number is even
        if (num % 2 == 0) {
            // Add the even number to the sum
            sum += num;
        }
    }
    
    // Output the sum of even numbers
    cout << "Sum of even numbers between 100 and 200: " << sum << endl;
    
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Input the length of the vectors
    cout << "Enter the length of the vectors: ";
    cin >> n;

    // Create vectors to store the input vectors
    vector<int> vector1(n), vector2(n);

    // Input the elements of the first vector
    cout << "Enter the elements of the first vector:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Input the elements of the second vector
    cout << "Enter the elements of the second vector:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calculate the dot product
    int dotProduct = 0;
    for (int i = 0; i < n; ++i) {
        dotProduct += vector1[i] * vector2[i];
    }

    // Output the dot product
    cout << "The dot product of the two vectors is: " << dotProduct << endl;

    return 0;
}

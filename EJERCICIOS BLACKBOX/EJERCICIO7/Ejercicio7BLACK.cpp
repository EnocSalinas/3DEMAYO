#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Input the length of the vectors
    cout << "Enter the length of the vectors: ";
    cin >> n;

    // Create vectors to store the input vectors and the sum vector
    vector<int> vector1(n), vector2(n), sumVector(n);

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

    // Calculate the sum of the vectors and store in the sum vector
    for (int i = 0; i < n; ++i) {
        sumVector[i] = vector1[i] + vector2[i];
    }

    // Output the sum vector
    cout << "Sum vector:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << sumVector[i] << " ";
    }
    cout << endl;

    return 0;
}

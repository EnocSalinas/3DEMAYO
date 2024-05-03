#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int num_students = 8;
    vector<int> grades(num_students);
    
    // Input grades
    cout << "Enter the grades of " << num_students << " students:" << endl;
    for (int i = 0; i < num_students; ++i) {
        cout << "Grade of student " << i+1 << ": ";
        cin >> grades[i];
    }
    
    // Calculate statistics
    int num_approved = 0, num_failed = 0, total_grades = 0;
    for (int grade : grades) {
        total_grades += grade;
        if (grade >= 60)
            num_approved++;
        else
            num_failed++;
    }
    
    // Calculate general average
    double general_average = static_cast<double>(total_grades) / num_students;
    
    // Output results
    cout << "Number of approved students: " << num_approved << endl;
    cout << "Number of failed students: " << num_failed << endl;
    cout << "General average of the group: " << general_average << endl;
    
    return 0;
}

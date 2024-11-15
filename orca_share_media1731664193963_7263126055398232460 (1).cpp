#include <iostream>
using namespace std;

int main() {
    double gpa;
    int creditHours, extracurricularActivities;
    
    cout << "Welcome to SCHOLARSHIP ELIGIBILITY CHECKER!\n";
    
    // Input
    cout << "Enter GPA: ";
    cin >> gpa;
    cout << "Enter completed credit hours: ";
    cin >> creditHours;
    cout << "Enter the number of extracurricular activities: ";
    cin >> extracurricularActivities;
    
    // Checking for scholarship eligibility
    bool eligibleForUniversityScholarship = false;
    bool eligibleForCollegeScholarship = false;
    bool eligibleForLeadershipScholarship = false;
    
    // University Scholarship
    if (gpa <= 1.25 || (gpa <= 1.5 && creditHours >= 40)) {
        eligibleForUniversityScholarship = true;
    }
    
    // College Scholarship
    if (gpa <= 2.0 && creditHours >= 30 && extracurricularActivities >= 2) {
        eligibleForCollegeScholarship = true;
    }
    
    // Leadership Scholarship
    if (gpa <= 2.5 && creditHours >= 20 && extracurricularActivities >= 1) {
        eligibleForLeadershipScholarship = true;
    }

    // Output
    cout << "The student is eligible for the following scholarship(s):\n";
    
    if (eligibleForUniversityScholarship) {
        cout << "- University Scholarship\n";
    }
    if (eligibleForCollegeScholarship) {
        cout << "- College Scholarship\n";
    }
    if (eligibleForLeadershipScholarship) {
        cout << "- Leadership Scholarship\n";
    }
    
    if (!eligibleForUniversityScholarship && !eligibleForCollegeScholarship && !eligibleForLeadershipScholarship) {
        cout << "The student is not eligible for any scholarships.\n";
    }
    
    return 0;
}
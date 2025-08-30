#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<double> grade(n), credit(n);
    double totalCredits = 0, totalPoints = 0;

    for(int i=0; i<n; i++){
        cout << "Enter grade (0-4) for course " << i+1 << ": ";
        cin >> grade[i];
        cout << "Enter credit hours for course " << i+1 << ": ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalPoints += grade[i] * credit[i];
    }

    double CGPA = totalPoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nYour CGPA is: " << CGPA << endl;
    return 0;
}


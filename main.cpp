#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    if(!(cin >> n) || n <= 0){
        cerr << "Invalid number of courses.\n";
        return 1;
    }

    vector<double> grade(n), credit(n);
    double totalCredits = 0, totalPoints = 0;

    for(int i=0; i<n; i++){
        cout << "Enter grade (0-4) for course " << i+1 << ": ";
        cin >> grade[i];
        cout << "Enter credit hours for course " << i+1 << ": ";
        cin >> credit[i];

        if(grade[i] < 0 || grade[i] > 4 || credit[i] <= 0){
            cerr << "Invalid input at course " << i+1 << ".\n";
            return 1;
        }

        totalCredits += credit[i];
        totalPoints  += grade[i] * credit[i];
    }

    if(totalCredits == 0){
        cerr << "Total credits cannot be zero.\n";
        return 1;
    }

    double CGPA = totalPoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nYour CGPA is: " << CGPA << endl;
    return 0;
}

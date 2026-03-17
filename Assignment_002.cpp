#include <iostream>
#include <vector>
using namespace std;

void analyzeGrades(const vector<vector<int>>& grades) {
    int students = grades.size();
    int subjects = grades[0].size();
    int highest = -1;

    cout << "Grade Matrix ";
    for(int i=1; i <=subjects; i++){
        cout<<"Subject "<<i<<" ";
    }
    cout<<"Average";
    cout<<endl;
    cout<<"-----------------";
    for(int i=1; i <=subjects; i++){
        cout<<"-------------";
    }
    cout<<endl;
    for (int i = 0; i < students; i++) {
        int sum = 0;
        for (int j = 0; j < subjects; j++) {
            int grade = grades[i][j];
            cout <<"\t\t"<< grade << "\t ";
            sum += grade;
            if (grade > highest) highest = grade;
        }
        cout <<(double)sum / subjects << endl;
    }

    cout << "Highest grade in matrix: " << highest << endl;
}

int main() {
    int students, subjects;
    cout << "Enter number of students: ";
    cin >> students;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    vector<vector<int>> grades(students, vector<int>(subjects));

    for (int i = 0; i < students; i++) {
        cout << "Enter grades for Student " << i+1 << ":\n";
        for (int j = 0; j < subjects; j++) {
            cout << "Subject " << j+1 << ": ";
            cin >> grades[i][j];
        }
    }

    analyzeGrades(grades);
    return 0;
}

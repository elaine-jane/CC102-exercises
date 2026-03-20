#include <iostream>
using namespace std;

struct student {
    int student_ID;
    string name;
    string course;
    int gpa;
};

void input(student s[], int n);
void display(student s[], int n);

int main() {
    int num;
    char choice;

    do {
        cout << "Enter number of students: ";
        cin >> num;

        student s[num];

        input(s, num);
        display(s, num);

        cout << "\nDo you want to repeat? Y/N: ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}

void input(student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\n=== Student [" << i + 1 << "] ===" << endl;

        bool duplicate = false;
        do {
            duplicate = false;
            cout << "Input student ID: ";
            cin >> s[i].student_ID;

            for (int j = 0; j < i; j++) {
                if (s[j].student_ID == s[i].student_ID) {
                    duplicate = true;
                    cout << "! Student ID " << s[i].student_ID << " is already taken. Please enter a different ID.\n";
                    break;
                }
            }
        } while (duplicate);

        cin.ignore();
        cout << "Input Name: ";
        getline(cin, s[i].name);
        cout << "Input Course: ";
        getline(cin, s[i].course);
        cout << "Input GPA: ";
        cin >> s[i].gpa;
        cin.ignore();
    }
}

void display(student s[], int n) {
    cout << "\nStudent ID\tName\t\tCourse\t\tGPA\tAcademic Standing\n";
    cout << "--------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << s[i].student_ID << "\t\t"
             << s[i].name << "\t\t"
             << s[i].course << "\t\t"
             << s[i].gpa << "\t";

        if (s[i].gpa >= 90)
            cout << "Excellent";
        else if (s[i].gpa >= 80)
            cout << "Very Good";
        else if (s[i].gpa >= 70)
            cout << "Good";
        else if (s[i].gpa >= 60)
            cout << "Passing";
        else
            cout << "Failed";

        cout << endl;
    }
}

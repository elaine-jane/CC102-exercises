#include <iostream>
using namespace std;

int main()
{
    char repeat;

    do
    {
        int students, quizzes;

        cout << "Enter number of students: ";
        cin >> students;

        cout << "Enter number of quizzes: ";
        cin >> quizzes;

        float scores[50][50];
        float average[50];

        for (int i = 0; i < students; i++)
        {
            float sum = 0;

            cout << "\nStudent " << i + 1 << " scores: ";

            for (int j = 0; j < quizzes; j++)
            {
                cin >> scores[i][j];
                sum = sum + scores[i][j];
            }

            average[i] = sum / quizzes;
        }


        cout << "\n\nStudent\t";

        for (int j = 0; j < quizzes; j++)
        {
            cout << "Q" << j + 1 << "\t";
        }

        cout << "Average";

        cout << endl;

        for (int i = 0; i < students; i++)
        {
            cout << i + 1 << "\t";

            for (int j = 0; j < quizzes; j++)
            {
                cout << scores[i][j] << "\t";
            }

            cout << average[i] << endl;
        }

        cout << "\nRun again? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

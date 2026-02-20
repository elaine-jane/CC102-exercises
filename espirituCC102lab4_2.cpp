#include <iostream>
using namespace std;

int main()
{
    char repeat;

    do
    {
        double sales[5][4] = {0};

        int salesperson, product;
        double amount;
        char choice;

        do
        {
            cout << "\nSalesperson (1-4): ";
            cin >> salesperson;

            cout << "Product (1-5): ";
            cin >> product;

            cout << "Amount: ";
            cin >> amount;

            sales[product - 1][salesperson - 1] =
            sales[product - 1][salesperson - 1] + amount;

            cout << "Add another entry? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        cout << "\nProduct\t1\t2\t3\t4\tTotal";
        cout << endl;

        double grandTotal = 0;

        for (int i = 0; i < 5; i++)
        {
            double rowTotal = 0;

            cout << i + 1 << "\t";

            for (int j = 0; j < 4; j++)
            {
                cout << sales[i][j] << "\t";
                rowTotal = rowTotal + sales[i][j];
            }

            cout << rowTotal << endl;
            grandTotal = grandTotal + rowTotal;
        }

        cout << "Total\t";

        for (int j = 0; j < 4; j++)
        {
            double colTotal = 0;

            for (int i = 0; i < 5; i++)
            {
                colTotal = colTotal + sales[i][j];
            }

            cout << colTotal << "\t";
        }

        cout << grandTotal << endl;

        cout << "\nRun again? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int day, month, year;

    do {
        cout << "Enter day (1-31): ";
        cin >> day;

        if (day < 1 || day > 31) {
            cout << "Invalid day! Please enter again." << endl;
        }
    } while (day < 1 || day > 31);

    do {
        cout << "Enter month (1-12): ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter again." << endl;
        }
    } while (month < 1 || month > 12);

    cout << "Enter year: ";
    cin >> year;

    cout << "You entered:" << endl;
    cout << day <<"/ " << month <<"/ " << year << endl;

    return 0;
}

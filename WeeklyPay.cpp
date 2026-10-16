
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string employeeName;
    double hoursWorked;
    double hourlyRate;
    double grossPay;

    // Get employee information
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter hourly pay rate: $";
    cin >> hourlyRate;

    // Calculate gross pay
    grossPay = hoursWorked * hourlyRate;

    // Display weekly pay summary
    cout << fixed << setprecision(2);

    cout << "\n========================================\n";
    cout << "WEEKLY PAY SUMMARY\n";
    cout << "========================================\n";

    cout << left << setw(25) << "Employee:"
         << employeeName << endl;

    cout << left << setw(25) << "Hours Worked:"
         << right << setw(8) << hoursWorked << endl;

    cout << left << setw(25) << "Hourly Rate:"
         << "$" << right << setw(7) << hourlyRate << endl;

    cout << "----------------------------------------\n";

    cout << left << setw(25) << "Gross Pay:"
         << "$" << right << setw(7) << grossPay << endl;

    cout << "========================================\n";

    return 0;
}

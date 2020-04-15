#include <iostream>

using namespace std;

// Declare Global Variables
const double principal = 1000;
const double rate = .017; // percent in decimal

double calculateInterest(double time);

int main()
{
    // Initialize variables
    double time;
    double interestAccumulated;

    cout << "Enter the amount of time (in years) to calculate the interest for: ";
    cin >> time;
    cout << endl;

    interestAccumulated = calculateInterest(time);

    cout << "Your simple interest rate is: " << interestAccumulated << endl;

    return 0;
}

double calculateInterest(double time)
{
    double interest;

    interest = principal * rate * time;

    return interest;
}
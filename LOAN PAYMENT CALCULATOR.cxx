
#include <iostream>
using namespace std;

int main()
{
    double loanAmount, interestRate, loanTerm, monthlyPayment;

    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    cout << "Enter the interest rate : ";
    cin >> interestRate;

    cout << "Enter the loan term : ";
    cin >> loanTerm;
    double monthlyInterestRate = (interestRate / 100) / 12;

    int numberOfPayments = loanTerm * 12;

    cout << "Your monthly payment is: " << monthlyPayment << endl;

    return 0;
}
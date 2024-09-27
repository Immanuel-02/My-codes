#include <iostream>
using namespace std;
int main( ) {
       float principal, rate, time, interest;

    cout << "Enter the principal amount: ";
   cin >> principal;

    cout << "Enter the interest rate (in percent): ";
    cin >> rate;
cout << "Enter the time : ";
   cin >> time;
   interest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << interest << endl;

    return 0; 
}
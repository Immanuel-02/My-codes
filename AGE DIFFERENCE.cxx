
#include <iostream>
using namespace std;

int main() {
    int birthYear1, birthYear2;
    int age1, age2, AgeDifference;

    cout << " Enter the birthYear1 of the first person : ";
    cin >> birthYear1;

   cout << " Enter the birthYear2 of the second person : " ;
    cin >> birthYear2;

      int currentYear = 2024 ;

    age1 = currentYear - birthYear1;

        age2 = currentYear - birthYear2;

        AgeDifference = abs(age1 - age2);
cout << "The age difference between the two people is " << AgeDifference << " Years." << endl;

    return 0;
}

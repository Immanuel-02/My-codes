#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

   cout << "Enter your weight in kilograms: " ;
  cin >> weight;

   cout << "Enter your height in meters: ";
    cin >> height;

     bmi = weight / (height * height);

   cout << "Your BMI is: " << bmi << endl;


    return 0;
}

#include <iostream>
using namespace std;
int main( ) {
 int Width, Length, Area, Perimeter;
 cout << "Find the Area and Perimeter of a Rectangle : " ;
 cout << " Input the Length of the rectagle : " ;
 cin >> Length;
cout << "Input the Width of the rectagle : " ;
cin >> Width ;
Area = ( Length * Width) ;
Perimeter = 2 * (Length + Width) ;
cout << " The Area of the rectangle is : " << Area<< endl;
cout << "The Perimeter of the rectangle : "
<< Perimeter<< endl;
    return 0; 
}
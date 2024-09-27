#include <iostream>
using namespace std;
int main() {
  int count;
  cout << "Enter how many Fibonacci Numbers to print:" ;
  cin >> count;
  int first = 0;
  int second = 1;
  cout << Fibonacci series : "<< first << "  " << "   " ;
  for ( int i = 3; i <= count ; i ++) {
      int next = first + secoud;
      secoud = next;
  }
  cout << endl;
  return 0;
   }

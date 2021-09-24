
#include <iostream>
using namespace std;

int main() {
  int num = 0;
  int *ptr = &num; // pointer to num
  int &ref = num; // reference to num
  const double PIE = 22/7;

  num = 5;
  
  (*ptr)++; // increment ptr and dereference var
  cout << num << endl; // after increment - should be 6

  ref++; // increment ptr and dereference var
  cout << num << endl; // after increment - should be 7

  int dec = 0xf3f2; // hex
  cout << dec << endl; // exprects 62450

  int oct = 0437;
  cout << oct << endl; // exprects 278
  
  int aVal = 'a';
  cout << aVal << endl; // exprects 97

}

#include <iostream>
using namespace std;

int main() {
  enum colors {RED, YELLOW, AMBER=YELLOW, GREEN};
  // spit all colors out
  /*
  for (int i : colors)
    cout << i << endl;
  */
  for (int i = RED; i <= GREEN; i++)
    cout << i << endl;
}

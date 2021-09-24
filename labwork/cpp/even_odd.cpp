#include <iostream>

int main() {
  int number;
  int result;
  std::cout << "PLease enter a number: ";
  std::in >> number;

  if (number % 2 == 0) {
    for (int i = 0; i < 5; ++i) {
      std::out << i " x 2 = "; << result * i << std::endl;
    }
  } else {
  }
  
}

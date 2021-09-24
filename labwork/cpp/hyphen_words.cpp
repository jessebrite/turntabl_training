#include <iostream>
#include <string>

using namespace std;

int main() {
  string sentence = "My-name-bla-bla";
  string word = "";
  int count = 0;

  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == '-') {
      cout << count <<  " "  << word << endl;
      word = "";
      count = 0;
    }
    else {
      word += sentence[i];
      count++;
    }

  }
  cout << count <<  " "  << word << endl;
}


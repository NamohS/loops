#include <iostream>
using namespace std;

int main() {
  int input, in, copy;
  string output = "";
  copy = input;
  cin >> input;
  int j = 0;
  do {
    ++j;
    copy /= 10;
  } while (copy);
  for (int i = 0; i <= j; i++) {
    in = input % 10;
    switch (in) {
      case 0:
        output += "zero";
        break;
      case 1:
        output += "one";
        break;
      case 2:
        output += "two";
        break;
      case 3:
        output += "three";
        break;
      case 4:
        output += "four";
        break;
      case 5:
        output += "five";
        break;
      case 6:
        output += "six";
        break;
      case 7:
        output += "seven";
        break;
      case 8:
        output += "eight";
        break;
      case 9:
        output += "nine";
        break;
    }
    in = int(in / 10);
  }
  cout << output;
}

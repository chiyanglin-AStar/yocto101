#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 2) {
      break;
    }
    cout << i << "\n";
  }
  return 0;
}
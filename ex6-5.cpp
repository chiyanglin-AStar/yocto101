#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    if (i == 7) {
      continue;
    }
    if (i == 8) {
      cout <<  ", \n";
      continue;
    }
    cout << i ;
    cout <<  ", \n";
  }
  return 0;
}
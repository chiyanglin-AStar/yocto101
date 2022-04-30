#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    int x;
    int y;
    MyClass(int a , int b) {     // Constructor
      x = a;
      y = b;
      cout << "MyClass has been created x=" << x << "  y= " << y << endl;
    }
    int add(){
        return x+y;
    }
};

int main() {
  MyClass myObj(1,2);    // Create an object of MyClass (this will call the constructor)
  
  cout << " x + y =" << myObj.add() << endl;
  return 0;
}

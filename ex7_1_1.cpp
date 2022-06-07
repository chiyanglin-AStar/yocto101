#include <iostream>

using namespace std;

int area(int a, int b){
    int x;
    x = a*b;
    return x;
}

int main(){
    int a;
    int b;
    int sum;
    cin >> a;
    cin >> b;
    sum = area(a, b);
    std::cout << sum << std::endl;
}

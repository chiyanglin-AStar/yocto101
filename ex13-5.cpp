#include<stdio.h>
#if 1
struct Point{
  int x;
  int y;
}p1;
#else
typedef struct Point{
  int x;
  int y;
} Point;
#endif 
int main() {
    //struct Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}

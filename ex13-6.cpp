#include<stdio.h>
#if 1
struct Point{
  int x;
  int y;
};

typedef struct Point Point;
#else
typedef struct Point{
  int x;
  int y;
} Point;
#endif 
int main() {
    Point p1;
    Point* p=&p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    p->x = 9;
    p->y = 11;
    printf("%d \n", p->x);
    printf("%d \n", p->y);
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    
    return 0;
}

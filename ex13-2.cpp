#include<stdio.h>
int add(int  x, int y){
 return x + y;
}

struct Point{
  int x;
  int y;
  int (*lpfun)(int,int);
};
typedef struct Point Point;
int main() {
    Point p1;
    Point *lp=NULL;
    p1.x = 0;
    p1.y = 0;
    lp = &p1;
    lp->x = 1;
    lp->y = 3;
    lp->lpfun = add;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    printf("%d \n", lp->x);
    printf("%d \n", lp->y);
    printf("x+y = %d \n",lp->lpfun(lp->x,lp->y));
    return 0;
}


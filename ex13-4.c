#include <stdio.h>
#include <string.h>
int main(){
    double a=2.132;
    char arr[sizeof(a)];
    memcpy(arr,&a,sizeof(a));
    printf(" %c %c %c %c ", arr[0],arr[1],arr[2],arr[3]);
    printf("Hello World");

    return 0;
}

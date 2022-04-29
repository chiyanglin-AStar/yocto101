#include <stdio.h>
#include <cstring>
int main(){
    double a=2.132;
    char arr[sizeof(a)];
    char* c = arr;
    //char arr[]={'a','b','c','d'};
    //char* c = arr;
    memcpy(arr,&a,sizeof(a));
    printf("char byte = %zu \n",sizeof(char));
    printf("doubel byte = %zu \n",sizeof(double));
    printf(" %c %c %c %c \n", arr[0],arr[1],arr[2],arr[3]);
    printf(" %c %c %c %c \n", *c,*(c+1),*(c+2),*(c+3));
    printf("\n Hello World \n");

    return 0;
}

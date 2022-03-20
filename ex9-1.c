#include<stdio.h>
int main(void){
    int i,a[3]={1,3,7};
    /*
    a[0] = 5;
    a[1] = 2;
    a[2] = 9;
    */
   
    for(i=0;i<3;i++){
        printf(" a[%d]=",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    for(i=0;i<3;i++){
        printf(" a[%d] = %d \n",i,a[i]);
    }
    printf("hello world \n");
}
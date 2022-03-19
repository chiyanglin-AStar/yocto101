#include<stdio.h>
int main(void){
    int a=0,b=0;

   
    printf("please input int a =   \n");
    scanf("%d",&a);
    if( a < 5 ){
    	printf(" a < 5 \n ");
    }else{
        printf("  a >= 5 \n ");
    }
    printf(" a = %d \n",a);
}

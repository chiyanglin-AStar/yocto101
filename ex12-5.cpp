#include <stdio.h>
int main(){
    char charray[200];
    double num = 21.123456789;

    sprintf(charray, "%2.13f", num);
    //memcpy(charray,&num,sizeof(num));
    printf(" %s ", charray);
    printf("\n Hello World \n");
    printf("  %c %c %c %c \n ",charray[0],charray[1],charray[2],charray[3]);
    return 0;
}

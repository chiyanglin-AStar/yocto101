#include <stdio.h>
int main(){
    double vIn = 1.1234567;
    float  tt = sizeof(double)/sizeof(unsigned char);
    unsigned char  vOut    = (unsigned char)vIn;
    unsigned char* lvOut  =  (unsigned char*)(&vIn);
    printf(" %lf\n",vIn);
    printf(" tt = %f\n",tt);
    printf("\nconvert = %c \n ",vOut);
    printf("\nconvert = %h \n ",*lvOut);
    //printf("Hello World");

    return 0;
}

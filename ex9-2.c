#include <stdio.h>

int main()
{
    int  *i,ii; 
    int a[3]={1,2,3}, *aptr; 

    ii = 3 ;
    i = &ii;
    printf(" *i = %d \n", *i);
    printf( " &i = %p \n",&ii);
    printf( " i = %p  \n", i);
    
    
    
    aptr = &a[0];
    
    printf(" a[0] = %d \n", a[0]);
    printf( " &a[0] = %p \n",&a[0]);
    aptr = a; 
    printf( " aptr = %p \n",aptr);
    printf( " a = %p  \n", a);
    
    
    printf("Hello World");

    return 0;
}
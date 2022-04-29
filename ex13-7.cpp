#include <stdio.h>
// A normal function with an int parameter
// and void return type
int fun(int a,int b)
{
    printf("Value of a is %d\n", a);
    return (a > b)? a-b:b-a;
}

int diff(int a,int b)
{
    //printf("Value of a is %d\n", a);
    return (a > b)? a-b:b-a;
}

int add(int a,int b)
{
    //printf("Value of a is %d\n", a);
    return a+b ;
}

int sub(int a,int b)
{
    //printf("Value of a is %d\n", a);
    return a-b ;
}

int main()
{
    int (*fun_ptr)(int,int) = diff;  // & removed

    printf("The difference of a and b =%d \n",fun_ptr(10,9));  // * removed
 #if 1   
    fun_ptr = &add;                  // & removed

    printf("The difference of a and b =%d \n",fun_ptr(10,9));  // * removed
    
    
    fun_ptr= &sub;                   // & removed

    printf("The difference of a and b =%d \n",fun_ptr(10,9));  // * removed
 #endif   
   

    return 0;
}

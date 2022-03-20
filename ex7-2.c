#include <stdio.h>
int tt=100;
int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    tt++;
    printf(" tt = %d \n ",tt);
    tt++;
    return result;                     
    //return statement
}

int main()
{
    int n1,n2,sum;
    printf("Enters two numbers:\n ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);  // function call
    printf("sum = %d\n ",sum);
    printf(" tt = %d \n ",tt);
    return 0;
}



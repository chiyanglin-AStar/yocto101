#include<stdio.h>
int main() {
      double first, second, *temp1 , *temp2 , *temp3;
      temp1 = &first;
      temp2 = &second;
      printf("Enter first number: ");
      scanf("%lf", temp1);
      printf("Enter second number: ");
      scanf("%lf", temp2);

      // Value of first is assigned to temp
      temp3 = temp1;

      // Value of second is assigned to first
      temp1 = temp2;

      // Value of temp (initial value of first) is assigned to second
      temp2 = temp3;

      printf("\nAfter swapping, firstNumber = %.2lf\n", *temp1);
      printf("After swapping, secondNumber = %.2lf", *temp2);
      return 0;
}
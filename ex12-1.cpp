#include<stdio.h>

int main()
{
    char name[30];
    printf("Enter name: ");
    //gets(name);     //Function to read string from user.
    fgets(name, 30, stdin);
    printf("Name: ");
    puts(name);    //Function to display string.
    return 0;
}

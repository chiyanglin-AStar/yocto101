#include <stdio.h>
int main() {
    //char s[] = " hello world ! Are you in Taiwan ? ";
    int i;
    //char color[] = "blue"; 

    char color[] = {'b', 'l', 'u', 'e', '\0'}; 

    const char *colorptr="blue"; 

    char *c = &color[0]; 

    for (i = 0; color[i] != '\0'; ++i);

    printf("Length of the string: %d \n", i);

    i = sizeof(color)/sizeof(char);

    printf("Length of the string: %d \n", i);

    printf(" color string = %s \n",colorptr);

    printf(" color string = %s \n",c);
    printf(" another way :");
    for (i = 0; *(colorptr+i) != '\0'; ++i){
        printf("%c",*(colorptr+i));
    }
    printf("\n");
    printf(" another way :");
    for (i = 0; *(c+i) != '\0'; ++i){
        printf("%c",*(c+i));
    }
    printf("\n");
    
    ;

    return 0;
}

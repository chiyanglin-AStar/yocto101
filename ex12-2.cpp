#include <stdio.h>
int main() {
    char s[] = " hello world ! Are you in Taiwan ? ";
    int i;

    for (i = 0; s[i] != '\0'; ++i){
	if(s[i] == ' '){
		printf("s: %d \n",i);
	}
    }


    printf("Length of the string: %d \n", i);

    i = sizeof(s)/sizeof(char);

    printf("Length of the string: %d \n", i);

    return 0;
}

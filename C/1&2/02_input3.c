#include<stdio.h>
#include<stdlib.h>
int main(void){
    char a,b;
    printf("Enter any two alphebets\n");
    scanf("%c%c",&a,&b);
    printf("You are entered %c and %c",a,b);
    printf(" as your alphebets\n");
    return EXIT_SUCCESS;
}
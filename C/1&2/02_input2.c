#include<stdio.h>
#include<stdlib.h>
int main(void){
    float a,b=23.5;
    printf("Enter a number\n");
    scanf("%f",&a);
    printf("You are entered %f ",a);
    printf("as a number\n");
    printf("Default:%f",b);
    printf("\n");
    return EXIT_SUCCESS;
}
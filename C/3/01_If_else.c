/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    float a;
    printf("If Else Statement\n");
    printf("Enter a number\n");
    scanf("%f",&a);
    if (a<0)
    {
        printf("Entered number is negative\n");
    }
    else
    {
        printf("Entered number is positive\n");
    }
    return EXIT_SUCCESS;
}
/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    float a,b;
    printf("Enter two numbers to be compared\n");
    scanf("%f%f",&a,&b);
    if (a>b)
    {
        printf("First entered number is larger %f",a);
        printf("\n");
    }
    else
    {
        printf("Second entered number is larger %f",b);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
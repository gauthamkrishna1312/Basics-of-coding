#include<stdlib.h>
#include<stdio.h>
int main(void){
    float a,b,c,t;
    printf("Enter two numbers \n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("First enterd %f then entered %f\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nSwapped successfully\n");
    printf("First enterd %f then entered %f\n",a,b);
    return EXIT_SUCCESS;
}
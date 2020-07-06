#include<stdio.h>
#include<stdlib.h>
int main(void){
    float a,b,c,d,f;
    printf("Enter four numbers to get their average\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    f=(a+b+c+d)/4;
    printf("Average of the these four numbers = %f",f);
    printf("\n");
    return EXIT_SUCCESS;
}
/*Gautham Krishna P*/
#include<stdlib.h>
#include<stdio.h>
int main(void){
    int a,b,c=0;
    printf("Enter a number to check prime number\n");
    scanf("%d",&a);
    for (b=2;b<a;b++)
    {
        if ((a%b)==0)
        {
            c=1;
            break;
        }
    }
    if (c==0)
    {
        printf("Entered number is a prime number\n");
    }else
    {
        printf("Entered number is not a prime number\n");
    }
    return EXIT_SUCCESS;
}
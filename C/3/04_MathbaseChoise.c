/*Gautham Krishna P*/
#include<stdlib.h>
#include<stdio.h>
int main(void){
    float a,b,x;
    int c;
    printf("Enter two numbers\n");
    scanf("%f%f",&a,&b);
    printf("1-Addition\n2-Substraction\n3-Multipication\n4-Divition\n");
    printf("Enter number of your desired operation\n");
    scanf("%d",&c);
    if (c==1)
    {
        x=a+b;
        printf("Your result = %f",x);
        printf("\n");
    }else if (c==2)
    {
        x=a-b;
        printf("Your result = %f",x);
        printf("\n");
    }else if (c==3)
    {
        x=a*b;
        printf("Your result = %f",x);
        printf("\n");
    }else if (c==4)
    {
        x=a/b;
        printf("Your result = %f",x);
        printf("\n");
    }else
    {
        printf("You are entered an invalid opreation %d",c);
        printf("\nPlease enter a valid operation\n");
        scanf("%d",&c);
        if (c==1)
        {
        x=a+b;
        printf("Your result = %f",x);
        printf("\n");
        }else if (c==2)
        {
        x=a-b;
        printf("Your result = %f",x);
        printf("\n");
        }else if (c==3)
        {
        x=a*b;
        printf("Your result = %f",x);
        printf("\n");
        }else if (c==4)
        {
        x=a/b;
        printf("Your result = %f",x);
        printf("\n");
        }else
        {
        printf("Programm terminated \nStart again for further operation\n");
        }
    }    
    return EXIT_SUCCESS;
}
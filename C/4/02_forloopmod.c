/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    printf("Enter a limit for even numbers\n");
    scanf("%d",&a);
    printf("\n\n\n");
    for (b=1;b<=a;b++)
    {
        if (b%2==0)
        {
            printf("%d\n",b);
        }
    }
    printf("Even numbers printed till %d",a);
    printf("\n");
    return EXIT_SUCCESS;
}
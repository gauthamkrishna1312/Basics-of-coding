/*Gautham Krishna P*/
#include<stdlib.h>
#include<stdio.h>
int main(void){
    int a,b,c;   
    printf("Enter number of raws :");
    scanf("%d",&a);
    for (b=a;b>=0;b--)
    {
        for (c=0;c<=b;c++)
        {
            printf(" 1 ");
        }
        printf("\n");
    }
    printf("Operation success\n");
    return EXIT_SUCCESS;
}
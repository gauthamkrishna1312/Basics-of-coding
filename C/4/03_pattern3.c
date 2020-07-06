/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,c,d;
    printf("Enter wdth :");
    scanf("%d",&a);
    b=2*a;
    for (c=1;c<=b;c++)
    {
        for (d=1;d<=a;d++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("Operation success\n");
    return EXIT_SUCCESS;
}
/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a[4],i;
    a[0]=100;
    printf("Enter your numbers\n");
    for (i=1;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values are\n");
    for (i=1;i<=4;i++)
    {
        printf("Entered value %d",i);
        printf(" : %d",a[i]);
        printf("\n");
    }
    printf("Default value   : %d",a[0]);
    printf("\n");
    return EXIT_SUCCESS;
}
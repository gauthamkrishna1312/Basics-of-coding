/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a[100]/*Size of the arry*/,i,j;
    a[0]=100;/*Pre asighned value can't input in console*/
    printf("Enter arry limt :");
    scanf("%d",&j);
    printf("Enter your numbers\n");
    for (i=1;i<=j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values are\n");
    for (i=1;i<=j;i++)
    {
        printf("Entered value %d",i);
        printf(" : %d",a[i]);
        printf("\n");
    }
    printf("Default value   : %d",a[0]);
    printf("\n");
    return EXIT_SUCCESS;
}
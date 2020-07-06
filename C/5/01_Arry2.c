/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,lim;
    float a[100],sum=0;
    printf("Enter limit : ");
    scanf("%d",&lim);
    printf("\n");
    for (i=0;i<lim;i++)
    {
        scanf("%f",&a[i]);
    }
    for (i=0;i<lim;i++)
    {
        sum=sum+a[i];
    }
    printf("\n");
    printf("%f",sum);
    printf("\nArray added successfully\n");
    return EXIT_SUCCESS;
}
/*Gautham Krishna P*/
/*Selection sort*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,i,cd,cda,t,k,x;
    float b[100];
    printf("Enter a limiting nuber :");
    scanf("%d",&a);
    printf("Enter %d numbers\n",a);
    for (i=0;i<a;i++)
    {
        scanf("%f",&b[i]);
    }
    printf("Do you want to print the entered values [Yes(1)/No(2)]\n");
    scanf("%d",&cd);
    switch (cd)
    {
    case 1:
        printf("Entered values");
        for (i=0;i<a;i++)
        {
            printf(" %f",b[i]);
        }
        printf("\n");
        break;
    case 2:
        break;
    default :
        printf("Programm terminatted\n");
    }
    printf("Arrange in asending(1) or desending(2) order\n");
    scanf("%d",&cda);
    switch (cda)
    {
    case 1:
        for (i=0;i<(a);i++)
        {
            for (k=i+1;k<a;k++)
            {
                if (b[i]<b[a])
                {
                    x=b[i];
                    b[a]=b[i];
                    b[i]=t;
                }   
            }   
        }
        break;
    case 2:
        break;
    default:
        printf("Sorting terminatted\n");
    }
    return EXIT_SUCCESS;
}
/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,x;
    float a,b[100],n=0.5;
    printf("Enter a limit for the array with in 100 :");
    scanf("%d",&j);
    printf("\n");
    for (i=0;i<j;i++)
    {
        if (i==0)
        {
            b[0]=24.25;
        }else
        {
            b[i]=b[(i-1)]+n;
        }
    }
    for (i=0;i<j;i++)
    {
        printf("%f\n",b[i]);
    }
    printf("\nSearch here : ");
    scanf("%f",&a);
    printf("\n");
    for (i=0;i<j;i++)
    {
        if (a==b[i])
        {
            x=1;
            break;
        }
    }
    if (x==1)
    {
        printf("%f is in %dth position\n",a,i+1);
    }else
    {
        printf("No result found for this search\n");
    }
    return EXIT_SUCCESS;
}
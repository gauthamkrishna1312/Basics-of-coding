/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i;
    float a,b[100],n=0.5;
    printf("\n");
    for (i=0;i<100;i++)
    {
        if (i==0)
        {
            b[0]=24.25;
        }else
        {
            b[i]=b[(i-1)]+n;
        }
    }/*Code(from line 28-22) for printing the array with out these code values inside the arry will not be displayed*/
    for (i=0;i<100;i++)
    {
        printf("%f\n",b[i]);
    }
    printf("\nSearch here : ");
    scanf("%f",&a);
    printf("\n");
    for (i=0;i<100;i++)
    {
        if (a==b[i])
        {
            printf("%f is in %dth position\n",a,i+1);
            break;
        }
    }
    return EXIT_SUCCESS;
}
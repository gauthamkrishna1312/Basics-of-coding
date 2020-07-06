/*Gautham Krishna P*/
/*Selection sorting*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,a;
    float b[100],c;
    printf("Enter a limit :");
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%f",&b[i]);
    }
    printf("Enterd values are : ");
    for (i=0;i<a;i++)
    {
        printf("%f ",b[i]);
    }
    printf("\n");
    for (i=0;i<a-1;i++)
    {
        for (j=i+1;j<a;j++)
        {
            if (b[i]<b[j])
            {
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
        }
    }
    printf("\nSorted values are : ");
    for (i=0;i<a;i++)
    {
        printf("%f ",b[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
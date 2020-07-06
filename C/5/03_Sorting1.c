/*Gautham Krishna P*/
/*Selection sort*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,k;
    float a,b[100],n,t,y;
    printf("Enter your limt :");
    scanf("%d",&j);
    printf("Enter initial value :");
    scanf("%f",&y);
    printf("Enter an addition factor :");
    scanf("%f",&n);
    for (i=0;i<j;i++)
    {
        if (i==0)
        {
            b[0]=y;
        }else
        {
            b[i]=b[(i-1)]+n;
        }       
    }
    for (i=0;i<j;i++)
    {
        printf("%f\n",b[i]);
    }
    for (i=0;i<(j-1);i++)
    {
        for (k=i+1;k<j;k++)
        {
            if (b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
            
        }
    }
    printf("\nSorted array\n");
    for (i=0;i<j;i++)
    {
        printf("%f\n",b[i]);
    }
    return EXIT_SUCCESS;
}
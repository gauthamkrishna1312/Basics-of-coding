/*Gautham Krishna P*/
/*With argument and return*/
#include<stdio.h>
#include<stdlib.h>
float sum(float,float);
int main(void){
    int c;
    float a,b,d;
    printf("Do you want to run the programm\nYes(1)/No(2) :");
    scanf("%d",&c);
    if (c==1)
    {
        printf("\n******************************\nEnter two number to be added\n");
        scanf("%f%f",&a,&b);
        d=sum(a,b);
        printf("Entered values are added\nResult is :%f\n",d);
    }else if (c==2)
    {
        printf("\n******************************\nCompleted\n");
    }
    else
    {
        printf("\n******************************\nProgramm terminatted due to Invalid input\n/***rerun the programm to contunueue***/\n");
    }
    return EXIT_SUCCESS;
}
float sum(float n1,float n2){
    float c;
    c=n1+n2;
    return c;
}
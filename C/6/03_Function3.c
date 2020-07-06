/*Gautham Krishna P*/
/*Function without argument and with return*/
#include<stdio.h>
#include<stdlib.h>
float sum();
int main(void){
    int i;
    float x;
    printf("Do you want to run the programm\nYes(1)No(2) :");
    scanf("%d",&i);
    if (i==1)
    {
        x=sum();
        printf("\n**********************************\nEntered values are added\nResult is :%f\n",x);
    }
    else if (i==2)
    {
        printf("\n***********************************\nTask completed\n");
    }
    else
    {
        printf("\n***************************************\n</Programm termninatted due to invalid input/>\n");
    }
    return EXIT_SUCCESS;
}
float sum(){
    float x,y,z;
    printf("\nEnter two numbers to be added\n");
    scanf("%f%f",&x,&y);
    z=x+y;
    return z;
}
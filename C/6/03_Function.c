/*Gatutham Krishna P*/
/*Without argument without return*/
#include<stdio.h>
#include<stdlib.h>
void sum();
int main(void){
    int a;
    printf("Function\nWith out argument and without return\n");
    printf("Do you want try the Function working\nYes(1)N0(2)");
    scanf("%d",&a);
    if (a==1)
    {
        sum();
    }else if (a==2)
    {
        printf("\n***********************\nCompleted\n");
    }
    else
    {
        printf("\n******************************");
        printf("\nProgramm terminatted due to Invalid input\n/***rerun the programm to contunueue***/\n");
    }
    return EXIT_SUCCESS;
}
void sum(){
    float a,b,c;
    printf("\n******************************\nEnter two numbers\n");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("Enterd values are added\nResul is :%f\n",c);
}
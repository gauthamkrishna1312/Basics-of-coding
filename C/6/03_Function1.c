/*Gatutham Krishna P*/
/*With argument without return*/
#include<stdio.h>
#include<stdlib.h>
void sum(float,float);
int main(void){
    int a;
    float v1,v2;
    printf("Function\nWith argument and without return\n");
    printf("Do you want try the Function working\nYes(1)N0(2) :");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Enter two numbers for adding\n");
        scanf("%f%f",&v1,&v2);
        sum(v1,v2);
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
void sum(float a,float b){
    float c;
    c=a+b;
    printf("\n******************************\nEnterd values are added\nResul is :%f\n",c);
}
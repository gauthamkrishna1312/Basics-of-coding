#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a;
    float b,c;
    printf("Enter a number\n");
    scanf("%f",&b);
    printf("1-Get Double\n2-Get tripple\n3-Get halfe\n");
    printf("Choose one among 1,2&3\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        c=2*b;
        printf("Doubled value of your input =%f ",c);
        printf("\n");
        break;
    case 2:
        c=3*b;
        printf("Trippled value of your input =%f",c);
        printf("\n");
        break;
    case 3:
        c=0.5*b;
        printf("Halved value of your input =%f",c);
        printf("\n");
        break;
    default:
        printf("You are entered invalid feature\n");
        printf("Programm terminatted\n");
    }
    return EXIT_SUCCESS;
}
/*Gautham Krishna*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a;
    printf("Enter your passcode\n");
    scanf("%d",&a);
    if (a==13122001)
    {
        printf("You are in\n");
    }
    else
    {
        printf("Incorrect passcode\n");
    }
    return EXIT_SUCCESS;
}
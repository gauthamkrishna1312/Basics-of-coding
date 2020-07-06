/*Gautham krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j;
    float array[4][3];
    printf("Enter values to the array\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%f",&array[i][j]);
        }
    }
    printf("/********************************************************************************/\n\n");
    printf("Entered value inserted to an array is\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%f\t",array[i][j]);
        }
        printf("\n");
    }
    printf("/********************************************************************************/\n");
    return EXIT_SUCCESS;
}

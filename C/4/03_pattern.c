#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x,y,z;
    printf("Enter number of raws  :");
    scanf("%d",&x);
    printf("\n");
    for (y=1;y<=x;y++)
    {
        for (z=0;z<y;z++)
        {
            printf(" 1 ");
        }
        printf("\n");
    }
    printf("\n");
    return EXIT_SUCCESS;
}
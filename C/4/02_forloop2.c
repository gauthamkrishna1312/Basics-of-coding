/*Gautham Krishna P*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i,x=0;
    printf("Enter a limting ineger\n");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        x=x+i;
    }
    printf("%d\n",x);
    return EXIT_SUCCESS;
}
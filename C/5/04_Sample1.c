/**********-----------------------
Gautham Krisha P
This code is a prctise for improving my coding skills and it will helps me to fix my misconsepts and make the consepts of cods clear
It is worth full that creating such programms base don your learnings Here I can Clear the consepts of if,array,loops(for loop),swirch,swaping and sorting(selection sort)
------------------------*********/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int lim,g,i,p,fg,x,y;
    float ar1[100],initaial,addition,temp,w;
    printf("Enter a limiting digit(positive value) less than 100 :");
    scanf("%d",&lim);
    printf("\nDo you want an auto generated array [Yes(1)/No(2)] : ");
    scanf("%d",&g);
    printf("\n");
    if (g==1)
    {
        printf("Enter an initial value : ");
        scanf("%f",&initaial);
        printf("Enter an addition factor : ");
        scanf("%f",&addition);
        ar1[0]=initaial;
        for (i=1;i<lim;i++)
        {
            ar1[i]=ar1[i-1]+addition;
        }
        printf("Do you want to print the generated array [Yes(1)/No(2)] : ");
        scanf("%d",&p);
        if (p==1)
        {
            printf("\n");
            for (i=0;i<lim;i++)
            {
            printf("%f\n",ar1[i]);
            }
            printf("\n");        
        }else if (p==2)
        {
            printf("\nYour arrey is generated and saved for further operations\n");
        }else
        {
            printf("\nInvalid input---!programm_terminatted!\n");
        }
        x=1;
    }else if (g==2)
    {
        printf("Enter %d values to the array one by one\n",lim);
        for (i=0;i<lim;i++)
        {
            scanf("%f",&ar1[i]);
        }
        printf("\nDo you want to print the array [Yes(1)/No(2)] : ");
        scanf("%d",&p);
        if (p==1)
        {
            for (i=0;i<lim;i++)
            {
                printf("%f\n",ar1[i]);
            }
            printf("\n");
        }else if (p==2)
        {
            printf("\nYour arrey is saved for further operations\n");
        }else
        {
            printf("\nInvalid input---!programm_terminatted!\n");
        }
        x=1;
    }
    else
    {
        fg=10;
    }
    if (x==1)
    {
        printf("What operation you want perform Select one from below\n1-Print Your array in asending order\n2-Print your array in desending order\n3-Add number to each number in the array then Print\n==");
        scanf("%d",&fg);
    }
    switch (fg)
    {
    case 1:
        for (i=0;i<lim-1;i++)
        {
            for (y=i+1;y<lim;y++)
            {
                if (ar1[i]>ar1[y])
                {
                    temp=ar1[i];
                    ar1[i]=ar1[y];
                    ar1[y]=temp;
                }
            }
        }
        if (g==1)
        {
            printf("\nGenerated ayyay in asending order is");
        }else
        {
            printf("\nYou entered ayyay in asending order is");
        }
        for (i=0;i<lim;i++)
        {
            printf("\n%f",ar1[i]);
        }
        printf("\n");
        break;
    case 2:
        for (i=0;i<lim-1;i++)
        {
            for (y=i+1;y<lim;y++)
            {
                if (ar1[i]<ar1[y])
                {
                    temp=ar1[i];
                    ar1[i]=ar1[y];
                    ar1[y]=temp;
                }
            }
        }
        if (g==1)
        {
            printf("\nGenerated ayyay in desending order is");
        }else
        {
            printf("\nYou entered ayyay in desending order is");
        }
        for (i=0;i<lim;i++)
        {
            printf("\n%f",ar1[i]);
        }
        printf("\n");
        break;
    case 3:
        printf("Enter a number to be added to each number in the array :");
        scanf("%f",&w);
        for (i=0;i<lim;i++)
        {
            ar1[i]=ar1[i]+w;
        }
        if (g==1)
        {
            printf("\nGenerated ayyay with each term added %f is ",w);
        }else
        {
            printf("\nYou entered ayyay with each term added %f is ",w);
        }
        for (i=0;i<lim;i++)
        {
            printf("\n%f",ar1[i]);
        }
        printf("\n");
        break;
    case 10:
        printf("\nInvalid input---!programm_terminatted!\n./rerun the programm./\n");
        break;
    default:
        printf("\nInvalid input---!programm_terminatted!\n./rerun the programm./\n");
    }
    return EXIT_SUCCESS;
}

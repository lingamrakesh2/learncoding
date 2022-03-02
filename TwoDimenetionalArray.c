#include<stdio.h>

void main()
{
    int a[2][2] = {1,2,3,4};

    printf("%d",a[1][0]);

    for(int row=0; row<2;row++)
    {
        for(int col=0; col<2;col++)
        {
            printf("%d ",a[row][col]);
            //printf("\n %d",*(*(a+row)+col));
        }
        printf("\n");
    }
}
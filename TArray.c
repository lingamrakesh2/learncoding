#include<stdio.h>

void display(int x[r][c]);

void print ();

void main()
{
    int arr[2][2];
    int r, c;
    printf("enter the 2d value");

    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&arr[r][c]);
        }

    }
    display(arr);

void display(int x[2][2])
{
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%d",x[r][c]);
        }

    }
    printf("\n");
}
}
#include<stdio.h>


int sumOfElement(int x[]);
void main()
{
    int a[3] = {2,5,6};
    //printf("%d",a[2]);

    // printf("\n %d",a);
    // printf("\n %d",a+1);   //these both are giving address of 


    // printf("\n %d",*a);
    // printf("\n %d",*(a+1));
    // for(int i=0;i<5;i++)
    // {
    //     printf("\n %d",a[i]);
    // }

    // int *ptr;
    // ptr = a;

    //printf("%d \n", ptr);  //address shwing
    int res = sumOfElement(a);
    printf("\n %d",res);

}

int sumOfElement(int x[])
{
    int sum=0;
    for(int i=0; i<3;i++)
    {
        sum = sum+x[i];

    }
    return sum;
}
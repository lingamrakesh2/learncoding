#include<stdio.h>

int sum(int x,int y); //function decleration


int sum(int x,int y) //function defination
{
    int s;
    s=x+y;
    return s;
}

int main()  
{
    printf("sum of = %d",sum(5,5)); //function calling
    return 0;
}
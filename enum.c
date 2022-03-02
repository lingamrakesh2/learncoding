#include<stdio.h>
#include<stdint.h>
#include<limits.h>


enum day{morning=8,night=12}; //enumeration

void main()
{
    enum day wakeup;
    wakeup = morning;

    printf("%d",wakeup);
    

    printf("%d",sizeof(wakeup));
    
}
    
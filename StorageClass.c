#include<stdio.h>

void main()
{
    //int a;
    /* 4 Storage Class


       auto:-   //declare inside the function 
       key word:auto int
       memory: stack
       default value:garbage value

       register:-    // use in for loop
       key word:register
       memory: cpu
       default value:garbage value

       static:-
       key word:
       memory: 
       default value:
       
       Extern:-
       key word:
       memory: 
       default value:       */

       auto int a = 10;
       {
           auto int a;
           printf("\n %d",a); //garbage value assign to a;
       }
       printf("\n %d",a);


}
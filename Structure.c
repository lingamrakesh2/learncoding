#include<stdio.h>


//typedef struct newStruct St;

// struct newStruct
// {
//     int a;
//     float b;
//     char c;

// };

// void main()
// {
    
//     St MyStruct={10,20.4,'J'};

//     printf("%d",MyStruct.a);
//     printf("\n %f",MyStruct.b);
//     printf("\n %c",MyStruct.c);

//     St *ptr;
//     ptr = &MyStruct;

//     printf("\n %d",ptr->a);
//     printf("\n %f",ptr->b);

// }


/*Bit field concept*/ //reducing the size of structure

struct clock
{
    unsigned short int hr:4; //to store 4 bit
    unsigned short int min:6; //to store 6 bit
    unsigned short int sec:6; //6 bit

};

void main()
{
    
    struct clock time={10,20.4};

    printf("%d",sizeof(time));
    printf("\n %d \n %d \n %d",time.hr,time.min,time.sec);

}

#include<stdio.h>
/*pointer stores the address of another variable*/

// void main()
// {
//     int a = 20;
//     int *ptr;// or int* ptr
//     // char* ptr1;
//     // double *ptr2;
    
//     ptr = &a;
//     printf("%d",a);
//     printf("\n %d",&a);
//     printf("\n %d",ptr);
//     printf("\n %d",*ptr);
//     printf("\n %d",&ptr);   
// }
    


    // void main()
    // {
    //     char* cp;
    //     int* p;
    //     float* f;
    //     printf("%d",sizeof(cp));
    //     printf("\n %d",sizeof(p));
    //     printf("\n %d",sizeof(f));
    // }

    // int *ptr;//wild pointer not assigning any values
    // int *ptr=NULL;
    void main()
    {
        int a=5;
        int b=10;
        swap(&a,&b);
    }

    void swap(int* x ,int* y)
    {
        int temp= *x;
        *x = *y;
        *y = temp;

    }
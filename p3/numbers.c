#include <stdio.h>
#include "order.h"
#include "user_input.h"

int main (void)
{
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    char var4 = 'c';
    int* x;
    int* y;
    int* z;
    char* test;
    
    x = &var1;
    y = &var2;
    z = &var3;
    test = &var4;    

    readInts(x, y, z, test);

    switch(*test)
    {
        case 'A':
            ascending3(x, y, z);
            
            printf("first number is: %d\n", *x);
            printf("second number is: %d\n", *y);
            printf("third number is: %d\n", *z);
            break;
        case 'D':
            descending3(x, y, z);
            
            printf("first number is: %d\n", *x);
            printf("second number is: %d\n", *y);
            printf("third number is: %d\n", *z);
            break;
        default:
            printf("Not correct character:\n");
    }    

    return 0;
}

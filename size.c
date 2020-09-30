#include<stdio.h>
int main()
{
    // Declaring the different kinds of variables.
    int isInteger;
    float isDecimal;
    double isDouble ;
    char isString;

    // Printing the Size of different variables.
    printf("The size of integer is: %ld bytes\n",sizeof(isInteger));
    printf("The size of float is: %ld bytes\n",sizeof(isDecimal));
    printf("The size of double is: %ld bytes\n",sizeof(isDouble));
    printf("The size of char is: %ld bytes",sizeof(isString));

    return 0;
}

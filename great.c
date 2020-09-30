#include<stdio.h>
int main()
{
  // Declaring the required variables.
  int x,y,z,max;
  
  // Input the value of x.
  printf("Enter the value of x:");
  scanf("%d",&x);
  
  // Input the value of y.
  printf("Enter the value of y:");
  scanf("%d",&y);
  
  // Input the value of z.
  printf("Enter the value of z:");
  scanf("%d",&z);
  
  // Ternary Operation
  max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
  
  // Printing the maximum value.
  printf("The greatest among %d , %d and %d is %d.",x,y,z,max);
  
  return 0;
}


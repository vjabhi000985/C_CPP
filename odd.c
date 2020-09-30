#include<stdio.h>
int main()
{
  // Declaring the Variables.
  int num, isOdd=1, isEven=0;
  
  // Input the Number.
  printf("Enter the number:");
  scanf("%d",&num);
  
  // Ternary operation for finding out odd even.
  int res = (num % 2 == 0) ? isEven : isOdd;
  
  // Print the statements.
  if(res == isEven){
  	printf("The number %d is even number.",num);
  }
  else{
  	printf("The number %d is odd number.",num);
  }
  
  return 0;
}




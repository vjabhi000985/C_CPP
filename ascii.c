#include<stdio.h>
int main()
{
  // Declaring the character varaible.
  char str;
  
  // Enter the character.
  printf("Enter any character:");
  scanf("%c",&str);
  
  // Displaying its Equivalent ASCII value.
  printf("The ASCII value of character %c is %d",str,str);
  
  return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
  // Declaring the variables.
  char *str;
  
  // Input the string.
  printf("Enter the string:");
  gets(str);
  
  // Storing the length in an integer value.
  int len = strlen(str);
  
  // Printing the length of the string.
  printf("The length of string %s is %d",str,len);
  
  return 0;
}


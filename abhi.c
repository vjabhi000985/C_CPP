#include<stdio.h>
int main()
{
	// Declaring the variable 
   int n;
   
   // Input the number
   printf("Enter the no.");
   scanf("%d",&n);
   
   // Check whether the given no. is positive or not.
   if (n>0)
   {
   	printf("The given no. is positive");
   }
   else{
   	printf("The given no. is negative");
   }
   
   return 0;	
}

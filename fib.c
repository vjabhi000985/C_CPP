/* Fibonnaci Series */
#include<stdio.h>
int main()
{
  // Declaring the variable.
  int i , n, t1=0, t2=1, nextTerm;
  
  // Enter the length for the series.
  printf("Enter the length for the series:");
  scanf("%d",&n);
  
  // Printing The Fibonnaci Series.
  printf("Fibonacci Series:\n");
  
  // Looping Methodology without recursion
  for (i = 1; i <= n; i++)
  {
  	printf("%d\t",t1);
  	nextTerm = t1 + t2;
  	t1 = t2;
  	t2 = nextTerm;
  }
  
  return 0;
}


/* Prime Number*/
#include<stdio.h>
int main()
{
  // Declaring The Program.
  int num, isPrime = 1, i;
    
  // Enter the Number.
  printf("Enter the no. to check:");
  scanf("%d",&num);
  
  // Programming methodology for Prime.
  for( i = 2; i * i < num; i++){
  	if( num % i == 0){
  		isPrime = 0;
	  }
  }
  
  // Checking whether the number is prime or not.
  if(isPrime){
  	printf("The number %d is prime.",num);
  }
  else{
  	printf("The number %d is not prime.",num);
  }
  
  return 0;
}


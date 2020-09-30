#include<stdio.h>
int main()
{
  // Declaring the Variables.
  int num=1634,temp,rem;
  int result = 0;
  
  // Storing the value in temporary variable.
  temp=num;
  
  // Checking whether the no. is Armstrong or not. 
   while(temp != 0){
   	rem = temp % 10;
   	result += rem*rem*rem;
   	temp = temp/10;
   }
   
   // Printing the Final Results.
   if(result==num){
   	printf("The given number is a armstrong number.");
   }
   else{
   	printf("The givem number is not an armstrong number.");
   }
   
  return 0;
}


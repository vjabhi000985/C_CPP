#include<iostream>
using namespace std;
int main()
{
  /* Read two numbers and find out the quotient and remainder. */
  // Declaring the variables.
  int x,y,quotient,remainder;
  
  // Taking the input.
  cout<<"Enter the value of x:";
  cin>>x;
  
  cout<<"Enter the value of y:";
  cin>>y;
  
  // Operations.
  if(x > y)
  {
  quotient = x / y;
  remainder = x % y;
 }
 else{
  quotient = y/x;
  remainder = y%x;
 }
  
  cout<<"The quotient is "<<quotient<<endl;
  cout<<"The remainder is "<<remainder;
  
  return 0;
}


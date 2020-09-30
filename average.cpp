#include<iostream>
using namespace std;
int main()
{
  /* Finding out the average of 5 numbers. */
  // Declaring the variables.
  int x,i,temp=0;
  float avg;
  
  // Taking the input.
  cout<<"Enter the 5 numbers:"<<endl;
  for(i=0;i<5;i++){
  	cin>>x;
  	temp+=x;
  }
  
  // Calculating the average. Here, we are typecasting the integer value into float value.
  avg=(float)temp/5;
  
  // Printing the avearge of 5 numbers.
  cout<<"The average of 5 numbers is:"<<avg;
  
  return 0;
}


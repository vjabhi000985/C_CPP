#include<iostream>
using namespace std;
int main()
{
  int range, res;
  
  // Declaring and Inputing the range.
  cout<<"Enter the range:";
  cin>>range;
  
  // Summation Operation for N natural number.
  // for(i=1;i<=range;i++)
  // {
  //	res = res + i;
  // }
  
  // Without using for loop.
  res = (range * range + range)/2;
  
  // Printing the result.
  cout<<"The sum upto range "<<range<<" is "<<res;
  
  return 0;
}


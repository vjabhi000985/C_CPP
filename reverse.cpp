#include<iostream>
using namespace std;
int main()
{
  int num, rev=0, rem, temp;
  
  // Enter the number.
  cout<<"Enter the number:";
  cin>>num;
  
  // Storing the number in temporary variable.
  temp=num;
  
  // Reversing the number.
  while(num != 0)
  {
  rem = num % 10;
  rev = rev * 10 + rem;
  num = num / 10;
  }
  
  // Printing the reverse number.
  cout<<"The reverse number of "<<temp<<" is "<<rev;
  
  return 0;
}


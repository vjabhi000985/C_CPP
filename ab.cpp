#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int num,power;
  
  cout<<"Enter the number:";
  cin>>num;
  
  cout<<"Enter the power:";
  cin>>power;
  
  int sqR = pow(num,power);
  
  cout<<"The square of "<<num<<" is "<<sqR;
  return 0;
}


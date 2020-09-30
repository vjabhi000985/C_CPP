#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int num;
  
  cout<<"Enter the number:";
  cin>>num;
  
  int sqRoot = pow(num,0.5);
  
  cout<<"The square root of "<<num<<" is "<<sqRoot;
  return 0;
}


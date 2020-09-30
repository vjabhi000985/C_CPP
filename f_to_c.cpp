#include<iostream>
using namespace std;
int main()
{
  float f,c;
  
  cout<<"Enter the temperature in fahrenheit:";
  cin>>f;
  
  c=(0.56*(f-32));
  
  cout<<"The converted temperature in celsius is:"<<c;
  
  return 0;
}


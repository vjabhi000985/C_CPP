#include<iostream>
using namespace std;
int main()
{
  int rupees;
  float dollar;
  
  cout<<"Enter the currency in rupees:";
  cin>>rupees;
  
  dollar = rupees*0.0137;
  
  
  cout<<"The indian currency "<<rupees<<" rupees in dollar is "<<dollar<<" dollar approx.";
  
  return 0;
}


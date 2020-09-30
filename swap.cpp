#include<iostream>
using namespace std;
int main()
{
  int a,b,temp;
  
  cout<<"The first number is:";
  cin>>a;
  
  cout<<"The second number is:";
  cin>>b;
  
  // Print the value before swapping.
  cout<<"Before Swapping: a="<<a<<" and b="<<b<<endl;
  
  /* By using for loop or if-else statement we will increase the time complexity of the program.So I haven't
  use these concepts. */
  // Swapping Operations.
  /* With 3rd variable */
  // temp=a;
  // a=b;
  // b=temp;
  
  /* Without 3rd variable */
  // a=a+b;
  // b=a-b;
  // a=a-b;
  
  /* Using XOR Operation */
    a=a^b;
    b=a^b;
    a=a^b;
  
  // Print the value after swapping.
  cout<<"After Swapping: a="<<a<<" and b="<<b;
  	
  return 0;
}


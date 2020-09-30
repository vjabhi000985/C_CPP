#include<iostream>
using namespace std;
int main()
{
  char s1[100],s2[100];
  int i;
  cout<<"Enter the String:";
  cin>>s1;
  
  for(i=0;s1[i]!='\0';++i){
    s2[i]=s1[i];
  }
  
  s2[i]='\0';
  
  cout<<"My name is "<<s2<<" Singh";
  return 0;
}


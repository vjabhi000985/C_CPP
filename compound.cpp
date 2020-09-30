#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,amt,rate,time,ci;
	cout<<" enter the principal amount";
	cin>>p;
	cout<<" enter rate,time";
	cin>>rate>>time;
	amt=p*(pow(1+rate/100,time));
	ci=amt-p;
	cout<<" the compound interest is"<<ci;
	
  return 0;
}


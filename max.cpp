#include<iostream>
using namespace std;
int main()
{
  // Declaring the array.
  int arr[7]={1,45,677,1134,-4,78,-1};
  int max=0, i;
  
  // Initializing the maximum value.
  max=arr[0];
  
  // Finding out the maximum value in array.
  for(i=0;i<7;i++){
  	if(arr[i]>max){
  		max=arr[i];
	  }
  }
  
  cout<<"The maximum value in the given array is:"<<max;
  
  return 0;
}


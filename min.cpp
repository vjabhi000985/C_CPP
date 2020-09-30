#include<iostream>
using namespace std;
int main()
{
  // Declaring the array.
  int arr[7]={1,45,677,1134,-4,78,-1};
  int min=0, i;
  
  // Initializing the minimum value.
  min=arr[0];
  
  // Finding out the minimum value in array.
  for(i=0;i<7;i++){
  	if(arr[i] < min){
  		min=arr[i];
	  }
  }
  
  cout<<"The minimum value in the given array is:"<<min;
  
  return 0;
}

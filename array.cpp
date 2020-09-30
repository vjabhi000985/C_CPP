#include<iostream>
using namespace std;
int main()
{
	// Declaring the variable
    int num[6], i, sum=0, isCount=0;
    float avg=0;
	
	// Enter the array elements.
	cout<<"Enter the array Elements:"<<endl;
	
	// Using For loop.
	for(i=0;i<6;i++){
		cin>>num[i];
	}
	
	// Printing the array elements.
	cout<<"The array elements are:"<<endl;
	for(i=0;i<6;i++){
		cout<<num[i]<<" ";
	}
	
	// Sum of the array elements.
	for(i=0;i<6;i++){
		sum = sum + num[i];
		++isCount;
	}
	
	// Print the summation value.
	cout<<endl;
	cout<<"The sum of array elements are:"<<sum;
	
	// Calculating the average.
	avg =(float)sum/isCount; // Typecasting the integer into float value.
	
	// Printing the average.
	cout<<endl;
	cout<<"The average is:"<<avg;
	return 0;
}
/* Declaring the array */
// string str[]={"Abhi","Ashu","Rohan"};
// int arr[5]={1,2,45,667,89};
// arr[4]=6;
// cout<<str[2]+" Mehra";
// cout<<arr[4]+2;

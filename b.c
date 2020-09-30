#include<stdio.h>
int main(){
	int num,i,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
//	for(i=1;i<=num;i++){
//		sum +=i;
//      sum = sum + i;
//      printf("The sum of n natural no.s is: %d",sum);
//	}
    
    sum = ((num*num) + num)/2;
    
	printf("The sum of n natural no.s is: %d",sum);
	
	return 0;
}

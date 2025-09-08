/* C program that accepts 4 real numbers from the keyboard and prints out the
difference of the maximum and minimum values of these numbers.

Written By - Anand Kumar Maurya , 2025CA014
Date - 08/09/2025

*/

#include <stdio.h>
int main(){
	int n1,n2,n3,n4;
	int max,max1,max2,min1,min2,min,diff;
	printf("Enter 4 numbers : ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	if(n1>n2){
		max1=n1;
		min1=n2;
		}
	else {
		max1=n2;
		min1=n1;
	}
	
	if(n3>n4){
		max2=n3;
		min2=n4;
	}
	else{
		max2=n4;
		min2=n3;
	}
	
	if(max1>max2)
		max=max1;
	else max=max2;
	
	if (min1>min2)
		min=min2;
	else min=min1;
	
	diff=max-min;
	
	printf("Difference is : %d",diff);
	
	
	
	return 0;
}

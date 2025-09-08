/*C program that accepts a real number x from the keyboard and prints out the
corresponding value of sin(1/x).

Written By - Anand Kumar Maurya , 2025CA014
Date - 08/09/2025
*/

#include <stdio.h>
#include <math.h>
int main(){
	double x;
	printf("Enter the value of x : ");
	scanf("%lf",&x);
	double val=sin(1/x);
	printf("%.2lf",val);
	
	return 0;
}

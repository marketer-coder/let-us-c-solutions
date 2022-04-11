/*Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N.*/

#include<stdio.h>

int main()
{
	int N,a,b;
	printf("Enter number N : "); // ex. 12521
	scanf("%d",&N);
	a=(N/100); // 125
	b=N%100; // 21
	a=a+(b/50);//125+0 = 125
	b=b%50; //21
	a=a+(b/10); // 127
	b=b%10; //1
	a=a+(b/5); // 127
	b=b%5; // 1
	a=a+(b/2); // 127
	b=b%2; // 1
	a=a+(b/1); // 128
	
	
	
	printf("Number of notes is : %d",a);
	
}

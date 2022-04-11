#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 5 digit number \n "); // example 12345
	scanf("%d",&a);
	b=a%10; // 5
	b=b+(a/10)%10; //9
	b=b+(a/100)%10; //12
	b=b+(a/1000)%10; //14
	b=b+(a/10000); //15
	printf("sum of digit is %d \n",b);
	
	return 0;
	
	
}

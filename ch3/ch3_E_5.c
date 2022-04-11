 #include<stdio.h>
int main()
{
	int n,a,b,c,d,e,x;
	
	printf("Enter a five digit number : ");
	scanf("%d", &n);
		
	e = n % 10;
	d = (n/10) % 10;
	c = (n/100) % 10;
	b = (n/1000) % 10;
	a = (n/10000);
	
	//reversing the number
	x = e*10000 + d*1000 + c*100 + b*10 + a;
	printf("\n%d", x);
	
	if(x == n)
	printf("\nsame");
	else
	printf("\nnot same");
		
	return 0;
}

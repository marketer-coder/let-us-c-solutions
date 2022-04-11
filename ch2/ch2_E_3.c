 /* Area of triangle of three sides */
 #include<stdio.h>
 #include<math.h>
 int main()
 {

	int a,b,c,p;
	float area;
	
	printf("enter the three sides of triangle respectively \n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);	
	printf("c=");
	scanf("%d",&c);
	
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Area of triangle is %.2f \n",area);
	
	return 0;
 }


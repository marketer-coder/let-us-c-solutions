 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("enter the angles a,b,c\n");
 	scanf("%d %d %d",&a,&b,&c);
 	
 	if (a+b+c==180)
 	printf("it is triangle");
 	else
 	printf("not traingle");
 	
 	return 0;
 }

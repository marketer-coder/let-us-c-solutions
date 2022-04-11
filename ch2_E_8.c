#include<stdio.h>

int main()
{
	int a,b,c,d;
	 printf("Enter a: ");
     scanf("%d", &a);
     printf("Enter b: ");
     scanf("%d", &b);
     // a:5 , b:6
//     
//	 t = a;
//     a = b;
//     b = t;
//     
     a = a+b; // a:11, b:6
     b = a - b;// a: 11, b:5     
     a = a - b;//a:6, b:5     
     printf("a: %d, b: %d ", a, b);
       
       return 0;
       
}

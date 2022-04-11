 /*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/
 
 #include<stdio.h>
int main()
{
 int x,result,next;
 printf("Enter The number to revers=");
 scanf("%d",&x);
 // example 12345
 
 result=x%10; // 5
 result=result*10; //50
 
 next=(x/10)%10; // 4
 result=(result+next)*10; //540
 //3rd
 next=(x/100)%10;  // 3
 result=(result+next)*10; // 5430
 //2nd
 next=(x/1000)%10;  // 2 
 result=(result+next)*10;  // 54320
 //1st
 next=(x/10000)%10;  // 1
 result=result+next;
 printf("%d",result); //54321
	
	return 0;
	
	
}

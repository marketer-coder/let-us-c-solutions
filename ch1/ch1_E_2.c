#include<stdio.h>
int main()
{
	int db2c;
	printf("enter the distance bw 2 cities.\n");
	scanf("%d",&db2c);
	printf("the distance in km  %d \n",db2c);
	printf("the distance in meters  %d \n",db2c*1000);
	printf("the distance in feet %.2f \n",db2c*3280.84);
	printf("the distance in inches %d \n",db2c*39370);
	printf("the distance in cm %d \n",db2c*100000);
	
	return 0;
	
	
}

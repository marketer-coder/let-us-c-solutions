#include<stdio.h>

int main()
{
	int m1,m2,m3,m4,m5; float perc;
	printf ( "Enter values of marks in 5 subjects" );
	scanf ("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	printf ( "Total marks obtained %d \n",m1+m2+m3+m4+m5 );
	perc=(m1+m2+m3+m4+m5)/5;
	printf ("Your perc is %.2f ",perc);
	
	return 0;
	}

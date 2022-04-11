#include<stdio.h>
int main()
{
	int cp,sp,lor;
	printf("cost: ");
	scanf("%d",&cp);
	printf("selling price: ");
	scanf("%d",&sp);
	
	if(cp<sp)
	{
		lor=sp-cp;
		printf("made profit of : %d",lor);
		
	}
	if(cp>sp)
	{
		lor=cp-sp;
		printf("made loss of : %d",lor);
		
	}
	if(cp==sp)
	printf("no profit no loss");
	
	return 0;
	
}

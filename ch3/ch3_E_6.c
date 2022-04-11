 #include<stdio.h>
 int main()
 
{
	int ram,shyam,ajay;
	printf("enter ages of ram,shyam,ajay respectively:\n");
	scanf("%d %d %d",&ram,&shyam,&ajay);
	
	if (ram<shyam && ram<ajay)
	printf("ram is youngest");
	else if (shyam<ram && shyam<ajay)
	printf("shyam is youngest");
	else 
	printf("ajay is youngest");
	
	return 0;
	
}
	
	
	
	


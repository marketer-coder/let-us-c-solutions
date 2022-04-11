#include<stdio.h>
int main()
{
	int l,b,aor,peror;
	float r,aoc,coc;
	printf("enter the length of rectangle \n");
	scanf("%d",&l);
	printf("enter the breadth of rectangle \n");
	scanf("%d",&b);
	aor=l*b;
	peror=2*(l+b);
	printf("area of rectangle is %d \n\n",aor);
	printf("perimeter of rectangle is %d \n\n",peror);
	
	printf("enter the radius of circle \n");
	scanf("%f",&r);
	aoc=3.14*r*r;
	coc=2*3.14*r;
	printf("the area of circle is %.2f \n\n",aoc);
	printf("the circum of circle is %.2f \n\n",coc);
	
	return 0;
	
	
}

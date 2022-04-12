 #include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int degree, result;

    printf("Enter the degree of angle: ");
    scanf("%d", &degree);

    result = (sin(degree)*sin(degree) + cos(degree)*cos(degree));

    printf("Result is: %d", result);
    return 0;
}

 #include<stdio.h>
int main()
{
    float l,b,a,p;

    printf("Enter the length of rectangle: ");
    scanf("%f", &l);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", & b);

    a = l * b;
    p = 2 * (l+b);

    printf("The area of rectangle: %.2f\n", a);
    printf("The perimeter of rectangle: %.2f\n", p);

    if (a>p)
        printf("Area of rectangle is greater than it's perimeter");
    else
        printf("Perimeter of rectangle is greater than it's area");
}

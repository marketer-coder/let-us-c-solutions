#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    float x, y, r, theta,pi;  
      
  
    printf("Enter Cartesian Co-ordinates(x, y)\n");  
    scanf("%f%f", &x, &y);  
  
    r = sqrt(x*x + y*y);  
    theta = atan(y/x);      
    pi = 3.14;
    theta = theta * (180.0 / pi);   
  
    printf("Polar Co-ordinates: (r,theta) = (%.2f, %.2f)\n", r, theta);  
  
    return 0;  
}  

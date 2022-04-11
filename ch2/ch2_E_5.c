#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float lat1, lat2, lon1, lon2,d;
    float pi= 3.14;
    printf("Enter the latitude(L1,L2) respectively\n");
    scanf("%f %f", &lat1, &lat2);

    printf("Enter the longitude(G1,G2) respectively\n");
    scanf("%f %f", &lon2, &lon2);
    
    lat1 = lat1 * ( pi / 180.0 );  
    lat2 = lat2 * ( pi / 180.0 );  
    lon1 = lon1 * ( pi / 180.0 );  
    lon2 = lon2 * ( pi / 180.0 );  

   
   
    d = 3963 * acos( sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1) );  
  
    printf("Distance in nautical miles is %f\n", d);  
    
    return 0;
}



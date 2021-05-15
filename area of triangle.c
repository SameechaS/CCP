#include <stdio.h>
#include <math.h>
 int main()
 {

    float sidea, sideb ,sidec, area , S;


    printf("Input the three sides:");


    scanf("%f %f %f" , &sidea , &sideb, &sidec );


    S = (sidea + sideb + sidec)/2;


    area = sqrt(S*((S - sidea)*(S - sideb)*(S - sidec)));


    printf("The Area of the triangle is = %.2f" , area);


   return 0 ;



















 }

#include<stdio.h>
#include<math.h>

  double AreaOfCircle(double radius, double area )
   {
       return 3.14*radius*radius;



   }


   double main ()

   {
       double radius;

       double area;

       double FinalArea;

       printf("Enter the radius of the circle:");

       scanf("%lf" , &radius);

      FinalArea = AreaOfCircle (radius,area);

      printf("The Area of the circle is = %.2f" , FinalArea);

      return 0 ;
   }

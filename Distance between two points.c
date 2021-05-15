#include <stdio.h>
#include <math.h>

    int main()
    {

        float x1, y1, x2, y2, distance;

        printf("Enter X1 & Y1: ");

        scanf("%f %f", &x1, &y1);


        printf("Enter X2 & Y2: ");

        scanf("%f %f" , &x2, &y2);

        distance =  ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));


        printf("The distance between 2 points are: %.4f",  sqrt(distance));

        printf("\n");

        return 0 ;
















    }


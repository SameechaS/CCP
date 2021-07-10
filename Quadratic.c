#include <stdio.h>
#include <math.h>

int main(){
    float a ,b, c,r1, r2 , root;

    printf("Enter the 3 numbers:");

    scanf("%f %f %f" ,&a ,&b, &c);

    root = b * b - 4 * a * c;

    if (root>0){


        r1 = (-b + sqrt(root)) / (2 * a);

        r2 = (-b - sqrt(root)) / (2 * a);

        printf("The 2 Roots are: %.2f, & %.2f" , r1 ,r2);

    }

    else if (root==0){

    r1 = b / 2 * a;

    printf("The root is= %.2f" , r1);


    }

    else{
        r1= -b / (2 * a);
        r2 = sqrt(-root) / (2 * a);

        printf("The roots are %.2f & %2.f" , r1 , r2);
    }

    return 0;


}

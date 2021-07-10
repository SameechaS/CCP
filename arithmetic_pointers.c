
#include <stdio.h>

int main()
{
    float num1, num2;
    float *ptr1, *ptr2;
    int op;

    float sum, diff, mult, div;

    ptr1 = &num1;
    ptr2 = &num2;


    printf("Enter any two real numbers: ");
    scanf("%f%f", ptr1, ptr2);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division");
    scanf("%d" ,&op);

    switch (op)
    {

    case 1:
    sum  = (*ptr1) + (*ptr2);
    printf("Sum = %.2f\n", sum);
    break;

    case 2:
    diff = (*ptr1) - (*ptr2);
    printf("Difference = %.2f\n", diff);
    break;

    case 3:
    mult = (*ptr1) * (*ptr2);
    printf("Product = %.2f\n", mult);
    break;

    case 4:
    div  = (*ptr1) / (*ptr2);
    printf("Quotient = %.2f\n", div);
    break;

    }





    return 0;
}

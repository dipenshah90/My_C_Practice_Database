//Second Order Quadratic Equation
#include <stdio.h>
#include <math.h>

main()
{
    float a,b,c;
    float root1,root2,num;

    printf("\n Enter the Constant a :\n");
    scanf("%f",&a);

    printf("\n Enter the Constant b :\n");
    scanf("%f",&b);

    printf("\n Enter the Constant c :\n");
    scanf("%f",&c);
    //Eqn = a*x*x + b*x + c;

    num = sqrt(b*b - 4*a*c);

    root1 = (-b + num)/(2.0*a);
    root2 = (-b - num)/(2.0*a);

    printf("\nRoot number 1 is:%f\t",root1);
    printf("\nRoot number 2 is:%f\t",root2);

    return (0);
}

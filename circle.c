#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

main()
{
    int rad;
    float cir,area;
    printf("Enter the value of r:\n");
    scanf("%d",&rad);
    printf("The value of radius which you have entered:\n%d\n",rad);
    cir = 2 * M_PI * rad;
    printf("Circumference of the circle:\n%f\n",cir);
    area = M_PI*rad*rad;
    printf("Area of the circle:\n%f\n",area);
    return (0);
}


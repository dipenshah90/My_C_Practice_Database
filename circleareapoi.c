#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void area(int r, float *a)
{
    *a = M_PI*r*r;
}
main()
{
    int radius;
    float a;

    printf("Enter radius:");
    scanf("%d",&radius);

    area(radius,&a);

    printf("\nArea:\n%f",a);

    return(0);
}

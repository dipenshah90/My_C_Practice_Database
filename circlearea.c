#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

main()
{
    int radius;
    float area;

    printf("Enter radius:");
    scanf("%d",&radius);

    area = M_PI*radius*radius;
    printf("\nArea:\n%f",area);

    return(0);
}

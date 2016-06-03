#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

main()
{
    int height,base,angle;
    float area;

    //height = base = area = 0;

    printf("\nEnter height of the required scalene triangle:\n");
    scanf("%d",&height);

    printf("\nEnter base of the required scalene triangle:\n");
    scanf("%d",&base);

    printf("\nEnter angle of the required scalene triangle:\n");
    scanf("%d",&angle);

    area = (height*base*(sin(angle*(M_PI/180))))/2;
    printf("\nArea of the required scalene triangle:%f\n",area);
    return(0);
}

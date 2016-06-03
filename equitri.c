#include <stdio.h>
#include <math.h>

main()
{
    int side;
    float area;
    //side=0;

    printf("\nEnter value of side:");
    scanf("%d",&side);

    area = (sqrt(3)*side*side)/4;

    printf("\nArea of equilateral triangle:%f\n",area);
    return (0);
}

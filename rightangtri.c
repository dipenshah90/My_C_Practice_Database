#include <stdio.h>
#include <math.h>

main()
{
    int height,base;
    float area;

    printf("Enter height:");
    scanf("%d",&height);

    printf("Enter base:");
    scanf("%d",&base);

    area = (height*base)/2;

    printf("\narea: %0.1f",area);
    return(0);
}

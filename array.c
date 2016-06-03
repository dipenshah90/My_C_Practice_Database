#include <stdio.h>
#include <math.h>

main()
{
    int array[10];
    int i,sum = 0;
    int *ptr;
    printf("pointer value:%f",ptr);
    //printf("pointer value:%f",&ptr);

    printf("\nEnter the 10 values in the array:\n");
    for (i=0;i<10;i++)
        scanf("%d",&array[i]); //taking input at address of array

    ptr = array; //assigning array values to pointer

    for(i=0;i<10;i++)
    {
        sum = sum + *ptr; //pointing towards content and content is added
        ptr++; //pointer is incremented
    }

    printf("\nSum\n:%d",sum);
}

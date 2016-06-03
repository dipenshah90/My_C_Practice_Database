// Delete an element from an Array

#include <stdio.h>
#define MAX 30

main()
{
    int size, i, num;
    int A[MAX];
    // Size of an array
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    //Read elements of an array
    for (i=0;i<size;i++)
    {
        printf("Enter the characters:\n");
        scanf("%d",&A[i]);
    }
    //print elements
    for(i=0;i<size;i++)
        printf("Elements are:%d\n",A[i]);

    //Delete an element
    printf("Enter the element number you want to delete:");
    scanf("%d",&num);

    while(num < size)
    {
        A[num - 1] = A[num];
        num++;
    }
    size--;

    //print array

    for (i=0;i<size;i++)
    {
        printf("Array after deleted element:%d\n",A[i]);

    }
    //scanf("%d",%d);
}

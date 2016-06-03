//C Program to Read integers into an array and Reversing them using Pointers

// Take input from users, fill it up in an array for example: Take "Hello" as input.

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define MAX 1000
main()
{
    int A[MAX];
    int *ptr;
    ptr = &A[0];
    int size, i;

    printf("Enter array size:");
    scanf("%d",&size);
//    printf("size: %d",sizeof(int));
    for (i=0;i<size;i++)
    {
        printf("Please enter your characters:\n");

        scanf(" %c",&A[i]);
        //getch();
        ptr++;
    }
 /*   for (i=0; i<size;i++)
    {
        printf("array A[i] = %c\t", A[i]);
    } */
    for (i=0; i<size;i++)
    {
        printf("Array is:%c\n", A[i]);
    }
    ptr = &A[size - 1];

    for (i=size - 1;i>=0;i--)
    {
        printf("Reverse order for element is:%c\n",*ptr);
        ptr--;
    }
}

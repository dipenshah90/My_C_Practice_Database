// C Program to read and print an array

#include <stdio.h>
#include <math.h>
#define MAX 30
main()
{
    int i, size;
    char A[MAX];

    printf("Enter size of an array:\n");
    scanf("%d",&size);

    for (i=0;i<size;i++)
    {
        printf("Your character is:\n");
        scanf("%s",&A[i]);
    }
    for (i=0;i<size;i++)
    {
        printf("List of characters are:%c\n",A[i]);
    }
}

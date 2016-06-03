// Copy Elements of Array in another Array

#include <stdio.h>
#include <conio.h>
#define MAX 30

int i,size;
char A[MAX], B[MAX];


int copy(char* A,char* B)
{
     B = A;
     for(i=0;i<size;i++)
        printf("Copied arrays in B[i]:%c\n",B[i]);


}

main()
{
//    int size, i;
//Size of an array
    printf("Enter size of an array:\n");
    scanf("%d",&size);
//Read characters
    for (i=0;i<size;i++)
    {
        printf("Your characters are:\n");
        scanf("%s",&A[i]);
    }
 //Print characters
    for (i=0;i<size;i++)
        printf("Entered characters:%c\n",A[i]);

    copy(A,B);
}

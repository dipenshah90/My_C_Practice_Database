//Generate the Fibonacci Series starting from any two numbers
#include <stdio.h>
#include <math.h>

main()
{
    int n,first,second,i=0,sum;

    printf("first number\n");
    scanf("%d",&first);

    printf("second number\n");
    scanf("%d",&second);

    printf("Enter term number\n");
    scanf("%d",&n);

    printf("\nFibonacci series:%d %d\t ",first,second);

    while(i<n)
    {
        //i<n;
        sum = first + second;
        printf("%d ",sum);
        first = second;
        second = sum;
        i++;
    }
    return(0);
}


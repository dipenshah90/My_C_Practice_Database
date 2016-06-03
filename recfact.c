//Factorial of Number Using Recursion

#include <stdio.h>
#include <math.h>
int fact(int);

main()
{
    int num;

    printf("Enter the value of num:");
    scanf("%d",&num);

    //
    printf("Factorial is %d",fact(num));

    return(0);
}

int fact(int n)
{
    if (n==0)
    {
        return(1);
    }
    return (n*fact(n-1));

}

//Factorial of Number without using function
#include <stdio.h>
#include <math.h>

main()
{
    int i,num,fact=1;

    printf("\nEnter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact = i * fact;
    }
    printf("Factorial %d = %d",num,fact);
    //return num;

}

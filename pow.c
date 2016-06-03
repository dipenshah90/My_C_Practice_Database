//	Print table of n and square of n using pow()

#include <stdio.h>
#include <math.h>
//int square(int n);

main()
{
    double n;
    double n2;
    n2 = 0;
    //printf("\nEnter number:\n");
    //scanf("%lf",&n);

    printf("\nNumber:\t");
    printf("\tSquare of number:\t");

    for (n=1;n<11;n++)
        {
            n2 = pow(n,2);
            printf("\n%lf",n);
            printf("\t%lf",n2);

        }


    return (0);
}


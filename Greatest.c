// find greatest in 3 numbers
// Take 3 input values compare them and find the greatest among them;

#include <stdio.h>
#include <math.h>

main()
{
    int a,b,c; //initialize 3 values
    a=b=c=0;    //set values to 0 so that they don't take garbage values

    printf("\nFirst value:\n");
    scanf("%d",&a);

    printf("\nSecond value:\n");
    scanf("%d",&b);

    printf("\nThird value:\n");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("Greatest value is a:%d",a);
    }
    else if (b>a && b>c)
    {
        printf("Greatest value is b:%d",b);
    }
    else
    {
        printf("Greatest value is c:%d",c);
    }
}

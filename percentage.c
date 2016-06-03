// Calculate sum of 5 subjects and Find the percentage

#include <stdio.h>
#include <math.h>

main()
{
    int a,b,c,d,e,sum,total = 500;
    float percentage;

    printf("\nEnter 5 subjects marks:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    sum = a + b + c + d + e;
    printf("Sum of 5 subjects: %d\n",sum);

    percentage = (sum*100)/total;
    printf("\nPercentage of all the subjects:%f\n",percentage);
}

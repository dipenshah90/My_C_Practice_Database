// Convert temperature from degree centigrade to Fahrenheit

#include <stdio.h>
#include <math.h>

main()
{
    float Cel, Fahr;

    printf("\n Enter temperature in Degree Centigrade\n",Cel);
    scanf("%f",&Cel);

    Fahr = (Cel*9)/5 + 32;

    printf("\nThe temperature in Fahr is:%f\n",Fahr);
}

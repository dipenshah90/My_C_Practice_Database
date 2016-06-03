// Reverse A Given Number!
#include <stdio.h>
#include <math.h>

main()

{
    int number, reverse;
    reverse = 0;

    printf("\nEnter your desired number:\n");

    scanf("%d",&number);

    while(number != 0)
    {
        reverse = (reverse*10) + (number % 10);
        number = number / 10;
    }
    return reverse;
    printf("Reverse number is:",reverse);
}

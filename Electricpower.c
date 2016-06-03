#include <stdio.h>
#include <conio.h>
#include <math.h>
#define UNIT1 0.65
#define UNIT2 0.80


main()
{
    int CustNum,Power;
    float Charges;

    printf("\nEnter your number:\n");

    scanf("%d",&CustNum);
//    printf("\nYour customer number is:%d\n",CustNum);

    printf("\nEnter your power consumption:\n");

    scanf("%d",&Power);
    printf("\nYour power consumption is:%d\n",Power);

    if (Power>=0 && Power<=200)
    {
        Charges = 0.50 * Power;
        printf("Charges for power consumption is:%f\n",Charges);
    }
        else if (Power>200 && Power <= 400)
        {
            Charges = 100 + UNIT1*(Power - 200);
            printf("Charges for power consumption is:%f\n",Charges);
        }
            else if (Power>400 && Power <= 600)
            {
                Charges = 230 + UNIT2*(Power - 400);
                printf("Charges for power consumption is:%f\n",Charges);
            }
                else
                    return(0);
}


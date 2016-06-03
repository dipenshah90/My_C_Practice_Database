#include<stdio.h>
#include<math.h>

int main()
{
       int length, width;
       float area;

       printf("\nEnter the length : ");
       scanf("%d", &length);

       printf("\nEnter the width : ");
       scanf("%d", &width);

       area = length * width;
       printf("\nArea of Rectangle : %f",area);

       return (0);
}

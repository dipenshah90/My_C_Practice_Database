#include<stdio.h>
#include<math.h>
int main()
{
       int side;
       float area;
       printf("\nEnter the side : ");
       scanf("%d", &side);

       area = side * side;
       printf("\nArea of Circle : %f",area);

       return (0);
}

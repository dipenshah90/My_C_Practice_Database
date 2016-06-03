//Example of memory troubles wr.informatik.uni-hamburg.de
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *p;

    char c = *p;

    printf("\n [%c]\n",c);
    return 0;
}

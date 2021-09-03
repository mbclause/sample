#include <stdio.h>
#include <stdlib.h>
#include "define.h"




#define  add(one, two) (one + two)
#define  pi  3.14


int  stuff()
{
    int  num = add(2, 3);

    printf("num = %d\n", num);

    printf("pi = %f\n", pi);

    return 0;
}

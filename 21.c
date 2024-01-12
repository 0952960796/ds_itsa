#include <stdio.h>    
#include <stdlib.h>    
    
int main(void)    
{    
    double a[10];    
    int i;    
    double max, min;    
    for (i = 0; i < 10; i++)    
    {    
        scanf("%lf", &a[i]);    
    }    
    max = a[0];    
    min = a[0];    
    for (i = 1; i < 10; i++)    
    {    
        if (a[i] > max)    
        {    
            max = a[i];    
        }    
        if (a[i] < min)    
        {    
            min = a[i];    
        }    
    }    
    printf("maximum:%.2lf\n", max);    
    printf("minimum:%.2lf\n", min);    
    return 0;    
}

#include <stdio.h>

long odd_count(long n)
{
    long i;
    long count;

    i = 0;
    count = 0;
    while (i < n)
    {
        if (i % 3 == 0)
        {
            count+= 1;
        }
        i++;
    }
    return (count);
}

int main(void)
{
    printf("\t|%ld|\t", odd_count(15));
    return (0);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
    int *p;
    int *p1;
    p =(int *) malloc(4 * sizeof(int));
    *p = 32;
    *(p+1) = 42;
    *(p+2) = 52;
    *(p+3) = 62;
    *(p+4) = 72;
    // free(p);
    *p1 = 32;
    *(p1+1) = 420;
    *(p1+2) = 520;
    *(p1+3) = 620;
    *(p1+4) = 720;
    p1 = realloc(p, 5 * sizeof(int));
    free(p);
    while(*p1)
    {
        printf("%d\n", *p1);
        p1++;
    }
    // free(p);
    return (0);
}
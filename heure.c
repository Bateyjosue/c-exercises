#include <stdio.h>
void heure(int *h, int *m);
void main()
{
    int h = 30, m = 80;
    heure(&h, &m);
    printf("%d heure et %d munites\n", h, m);
}
void heure(int *h, int *m)
{
    *h = *m / 60;
    *m = *m % 60;
}
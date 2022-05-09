#include <stdio.h>


void    ft_putstr_non_printable(char *str)
{

}

void    main(void)
{
    char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char dest[50];
    unsigned int size = 19;

    printf("%s\b\bdeux", src);
} 
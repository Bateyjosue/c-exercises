
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < size-1)
    {
        dest[i] = src[i];
        i++;
    }
    
    return (i);
}

void    main(void)
{
    char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char dest[50];
    unsigned int size = 19;

    printf("%d", ft_strlcpy(dest, src, size));
}
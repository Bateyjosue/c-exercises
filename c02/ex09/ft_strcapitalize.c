
#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    str[0] -= 32;
    while (str[i] != '\0')
    {
        if((str[i-1] >= 32 && str[i-1] <= 47) || str[i-1] == ' ')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] -32;
            }
        }
        i++;
    }
    return str;
}

void    main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s", ft_strcapitalize(str));
}
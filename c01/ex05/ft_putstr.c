/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshishara <joshishara.dev@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:21:09 by joshishara        #+#    #+#             */
/*   Updated: 2022/02/15 03:52:47 by joshishara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++; 
    }
}

int main(void)
{
    char *str = "42 is Awesome and Amazing gsgdfb f agg fgsag sagggag  agagg gggrqhjh";
    ft_putstr(str);
}
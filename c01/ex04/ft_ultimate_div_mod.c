/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshishara <joshishara.dev@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:46:50 by joshishara        #+#    #+#             */
/*   Updated: 2022/02/15 02:35:51 by joshishara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int d, m;
    d = *a / *b;
    m = *a % *b;
    *a = d;
    *b = m;
    printf("%d %d\n", *a, *b);
}

int main(void)
{
    int *a, *b;
    int i = 5, j = 2;
    a = &i;
    b = &j;
    ft_ultimate_div_mod(a, b);
    return (0);
}
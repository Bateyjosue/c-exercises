/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshishara <joshishara.dev@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:42:14 by joshishara        #+#    #+#             */
/*   Updated: 2022/02/12 00:19:27 by joshishara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("%d \t %d\n", *a, *b);
}

void main(void)
{
    int a = 10, b = 30;
    ft_swap(&a, &b);
}
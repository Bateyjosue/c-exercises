/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshishara <joshishara.dev@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:06:00 by joshishara        #+#    #+#             */
/*   Updated: 2022/02/12 04:13:57 by joshishara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    printf("%d div %d mod,  %d and %d", *div, *mod,a,b);
}

void main(void)
{
    int a = 11; 
    int b = 3; 
    int *div; 
    int *mod;
    int d =a/b;
    int m = a%b;
    div = &d;
    mod = &m;
    // printf("a is:%p\t and b is: %p\t%p\t%p and d=%p and m=%p", &a, &b, div, mod,&d,&m);
    ft_div_mod(a, b,div,mod);
}
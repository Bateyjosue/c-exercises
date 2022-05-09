/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshishara <joshishara.dev@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:47:49 by joshishara        #+#    #+#             */
/*   Updated: 2022/02/12 10:23:37 by joshishara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int tab2[size];
    int index  = sizeof(tab);
    while (index >=0)
    {
        printf("%p\n", tab);
        index--;
    }
    
}

int main(void)
{
    int tab[] = {2,3,5,6};
    ft_rev_int_tab(tab, sizeof(tab));
    return 0;
}
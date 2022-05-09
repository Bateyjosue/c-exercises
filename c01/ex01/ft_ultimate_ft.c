/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshishara <joshishara.dev@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:15:55 by joshishara        #+#    #+#             */
/*   Updated: 2022/02/15 22:25:57 by joshishara       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    int a = 42;
    int *n1;
    int **n2;
    int ***n3;
    int ****n4;
    int *****n5;
    int ******n6;
    int *******n7;
    int ********n8;
    
    n1 = &a;
    n2 = &n1;
    n3 = &n2;
    n4 = &n3;
    n5 = &n4;
    n6 = &n5;
    n7 = &n6;
    n8 = &n7;
    nbr = &n8;
}

int main(void)
 {
	 int a = 32;
	 int *n;
	 int **n1;
	 int ***n2;
	 int ****n3;
	 int *****n4;
	 int ******n5;
	 int *******n6;
	 int ********n7;
	 int *********nbr;

	 n = &a;
	 n1 = n;
	 n2 = n1;
	 n3 = n2;
	 n4 = n3;
	 n5 = n4;
	 n6 = n5;
	 n7 = n6;
	 nbr = n7;

	 ft_ultimate_ft(nbr);
	 return (0);
 }

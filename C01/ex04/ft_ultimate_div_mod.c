/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:18:57 by fsoria            #+#    #+#             */
/*   Updated: 2023/09/22 12:43:38 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_div;
	int	b_mod;

	a_div = *a;
	b_mod = *b;
	*a = a_div / b_mod;
	*b = a_div % b_mod;
}

/*
int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);

	printf("%d %d", a, b);
}
*/
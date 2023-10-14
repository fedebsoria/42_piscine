/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:26:07 by fsoria            #+#    #+#             */
/*   Updated: 2023/09/21 14:45:06 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	cambio;

	cambio = *a;
	*a = *b;
	*b = cambio;
}

/* int	main(void)
{
	int a = 10;
	int b = 42;

	int *ptr_a = &a;
	int *ptr_b = &b;

	ft_swap(ptr_a, ptr_b);

	printf("%d %d", a, b);
} */

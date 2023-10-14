/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 08:55:50 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/04 12:27:09 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//factor n! (5! = 5 * 4 * 3 * 2 * 1 = 120)
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		result *= nb--;
	return (result);
}

/* int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}
 */
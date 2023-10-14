/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:56:43 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/05 13:19:13 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Iterates through i starting from 2.
// For each i, it checks if nb is divisible by i.
// If it is, nb is not prime, and it recursively checks the next number.
// If no factor is found, nb is a prime number and is returned.
//The while was wrong, it was i<nb but it's to be <=
int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			else
				i++;
		}
		return (nb);
	}
}

/* int	main(void)
{
	int n1 = 0;  // return 2
	int n2 = 6;  // return 7
	int n3 = 23; // return 23

	printf("%d \n", ft_find_next_prime(n1));
	printf("%d \n", ft_find_next_prime(n2));
	printf("%d \n", ft_find_next_prime(n3));
} */
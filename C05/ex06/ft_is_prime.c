/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:42:25 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/05 11:02:03 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// check if nb is prime (1) or not (0).
// if i < nb makes the nb % of i and checks if it's 0, if not incremments until
// i == nb and when
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

/* int main (){
	int n1 = 7;
	int n2 = 66;

	printf("%d \n", ft_is_prime(n1));
	printf("%d \n", ft_is_prime(n2));
} */
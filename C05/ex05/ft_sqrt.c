/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:55:14 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/05 10:28:40 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Use of long long so it doesn't overflow.
// iterates through int = i until i = nb, if it's a sq root
// return the value, if i != nb increment i and continues,
// if i never != nb is not a perfect sq
int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/* int	main(void)
{
	int n1 = 9;
	int n2 = 8;

	printf("%d \n", ft_sqrt(n1));
	printf("%d \n", ft_sqrt(n2));
} */
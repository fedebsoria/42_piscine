/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:31:59 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/12 14:39:23 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (0);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

/* int	main(void)
{
	int min = 1;
	int i = 0;
	int max = 10;
	int *array = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
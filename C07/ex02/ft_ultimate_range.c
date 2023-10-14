/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:39:55 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/12 16:18:48 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (-1);
	*range = result;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++ + ;
	}
	return (i);
}

/* int main (void)
{
	int min =1;
	int max = 10;
	int *range;
	int size = ft_ultimate_range(&range, min, max);

	printf("%d ", size);
	return(0)
} */
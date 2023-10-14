/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:20:57 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/12 16:36:34 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_leng(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
		i++;
	return (i);
}

int	ft_total(int size, char **strs, char *sep)
{
	int	total;
	int	j;

	total = 0;
	j = 0;
	while (j < size - 1)
	{
		total = total + ft_leng(strs[j]);
		if (j < size - 1)
			total = total + ft_leng(sep);
		j++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		leng;
	char	*dest;
	int		i;
	int		d;
	int		j;

	j = 0;
	i = 0;
	d = 0;
	leng = ft_total(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * (leng + 1));
	if (dest == NULL || sep == NULL)
		return (NULL);
	while (j < size)
	{
		while (strs[j][i] != '\0')
			dest[d++] = strs[j][i++];
		i = 0;
		if (j < size - 1)
			dest[d++] = sep[i++];
		i = 0;
		j++;
	}
	dest[d] = '\0';
	return (dest);
}

/* int	main(void)
{
	char *strs[] = {"hello", "fucking", "world"};
	char *sep = "-";
	char *result = ft_strjoin(3, strs, sep);
	printf("%s\n", result);
	return (0);
} */
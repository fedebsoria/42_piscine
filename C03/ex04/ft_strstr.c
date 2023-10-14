/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:12:31 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/02 09:20:09 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n] && str[i] != '\0')
		{
			i++;
			n++;
			if (to_find[n] == '\0')
				return (str + i - n);
		}
		else
		{
			i++;
			n = 0;
		}
	}
	return (0);
}

/*
int	main(void)
{
	char a [] = "Marolio um que olio";
	char b [] = "olio";
	printf("%s", ft_strstr(a,b));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:54:11 by fsoria            #+#    #+#             */
/*   Updated: 2023/09/27 11:14:05 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	f;
	int	i;

	f = 0;
	i = 0;
	while (str[f] != '\0')
	{
		if (i == 0 && (str[f] >= 'a' && str[f] <= 'z'))
		{
			str[f] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[f] >= 'A' && str[f] <= 'Z'))
			str[f] += 'a' - 'A';
		else if ((str[f] < '0') || (str[f] > '9' && str[f] < 'A')
			|| (str[f] > 'Z' && str[f] < 'a') || (str[f] > 'z'))
			i = 0;
		else
			i++;
		f++;
	}
	return (str);
}

int main ()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:21:16 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/03 12:11:35 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/* 
int	main(void)
{
	char test[] = "   ---+--+1234ab567"; // ejemplo del ej, debe dar -1234
	char test2[] = "1";
	char test3[] = "-1";
	char test4[] = "***-1";
	char test5[] = "-+1";

	printf("TEST 1: %d \n", ft_atoi(test));
	printf("TEST 2: %d \n", ft_atoi(test2));
	printf("TEST 3: %d \n", ft_atoi(test3));
	printf("TEST 4: %d \n", ft_atoi(test4));
	printf("TEST 5: %d \n", ft_atoi(test5));
}
 */
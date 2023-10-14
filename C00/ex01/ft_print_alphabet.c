/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:28:29 by fsoria            #+#    #+#             */
/*   Updated: 2023/09/21 09:28:36 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (i <= 25)
	{
		write(1, &c, 1);
		c++;
		i++;
	}
}

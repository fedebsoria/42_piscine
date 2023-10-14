/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:56:05 by fsoria            #+#    #+#             */
/*   Updated: 2023/10/05 09:47:21 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//this makes a fibonacci list
/* int ft_fibonacci(int n)
{
    n = 10;
    if (n <= 1)
        return n;
    else
        return ft_fibonacci(n-1) + ft_fibonacci(n-2);
} */

//takes a number as index and return the value of that index in the 
//fibonacci sequence of numbers.
//if the index < 0 return -1 as error.
int	ft_fibonacci(int index)
{
	int	result;
	int	temp;
	int	i;
	int	count;

	result = 0;
	temp = 1;
	count = 1;
	if (index < 0)
		return (-1);
	while (count <= index)
	{
		i = result + temp;
		temp = result;
		result = i;
		count++;
	}
	return (result);
}

/* int main()
{
    int i=10;
    printf("%d\n", ft_fibonacci(i));
}
 */
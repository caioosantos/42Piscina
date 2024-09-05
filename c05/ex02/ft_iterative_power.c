/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:08:03 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/05 11:53:55 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	result = nb;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*#include <stdio.h>

int	main(void)
{
	printf("Use case 1: %d should be: 8\n", ft_iterative_power(2, 3));
	printf("Use case 2: %d should be: 1\n", ft_iterative_power(5, 0));
	printf("Use case 3: %d should be: 9\n", ft_iterative_power(3, 2));
	printf("Use case 4: %d should be: 7\n", ft_iterative_power(7, 1));
	printf("Use case 5: %d should be: 0\n", ft_iterative_power(0, 5));
	printf("Use case 6: %d should be: 16\n", ft_iterative_power(4, 2));
	printf("Use case 7: %d should be: 1\n", ft_iterative_power(1, 100));
	printf("Use case 8: %d should be: 1024\n", ft_iterative_power(2, 10));
	printf("Use case 9: %d should be: 81\n", ft_iterative_power(3, 4));
	printf("Use case 11: %d should be: -8\n", ft_iterative_power(-2, 3));
	printf("Use case 12: %d should be: 1\n", ft_iterative_power(-2, 0));
	printf("Use case 13: %d should be: 0\n", ft_iterative_power(2, -3));
	return (0);
}*/

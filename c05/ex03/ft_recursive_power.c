/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:45:41 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/05 11:57:48 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>

int	main(void)
{
	printf("Use case 1: %d should be: 8\n", ft_recursive_power(2, 3));
	printf("Use case 2: %d should be: 1\n", ft_recursive_power(5, 0));
	printf("Use case 3: %d should be: 9\n", ft_recursive_power(3, 2));
	printf("Use case 4: %d should be: 7\n", ft_recursive_power(7, 1));
	printf("Use case 5: %d should be: 0\n", ft_recursive_power(0, 5));
	printf("Use case 6: %d should be: 16\n", ft_recursive_power(4, 2));
	printf("Use case 7: %d should be: 1\n", ft_recursive_power(1, 100));
	printf("Use case 8: %d should be: 1024\n", ft_recursive_power(2, 10));
	printf("Use case 9: %d should be: 81\n", ft_recursive_power(3, 4));
	printf("Use case 11: %d should be: -8\n", ft_recursive_power(-2, 3));
	printf("Use case 12: %d should be: 1\n", ft_recursive_power(-2, 0));
	printf("Use case 13: %d should be: 0\n", ft_recursive_power(2, -3));
	return (0);
}*/

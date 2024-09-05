/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:37:50 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/05 12:17:24 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (2);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			nb = ft_find_next_prime(nb + 1);
		n++;
	}
	return (nb);
}
/*#include <stdio.h>

int	main(void)
{
	printf("Use case 1: %d should be: 2\n", ft_find_next_prime(-5));
	printf("Use case 2: %d should be: 2\n", ft_find_next_prime(0));
	printf("Use case 3: %d should be: 2\n", ft_find_next_prime(1));
	printf("Use case 4: %d should be: 2\n", ft_find_next_prime(2));
	printf("Use case 5: %d should be: 3\n", ft_find_next_prime(3));
	printf("Use case 6: %d should be: 5\n", ft_find_next_prime(4));
	printf("Use case 7: %d should be: 7\n", ft_find_next_prime(6));
	printf("Use case 8: %d should be: 11\n", ft_find_next_prime(9));
	printf("Use case 9: %d should be: 101\n", ft_find_next_prime(100));
	printf("Use case 10: %d should be: 29\n", ft_find_next_prime(28));
	return (0);
}*/

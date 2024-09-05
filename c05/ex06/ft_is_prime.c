/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:31:58 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/05 12:14:18 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Use case 1: %d should be: 0 - not prime\n", ft_is_prime(-5));
	printf("Use case 2: %d should be: 0 - not prime\n", ft_is_prime(0));
	printf("Use case 3: %d should be: 0 - not prime\n", ft_is_prime(1));
	printf("Use case 4: %d should be: 1 - prime\n", ft_is_prime(2));
	printf("Use case 5: %d should be: 1 - prime\n", ft_is_prime(3));
	printf("Use case 6: %d should be: 0 - not prime\n", ft_is_prime(4));
	printf("Use case 7: %d should be: 1 - prime\n", ft_is_prime(5));
	printf("Use case 8: %d should be: 0 - not prime\n", ft_is_prime(9));
	printf("Use case 9: %d should be: 1 - prime\n", ft_is_prime(11));
	printf("Use case 10: %d should be: 0 - not prime\n", ft_is_prime(15));
	return (0);
}*/

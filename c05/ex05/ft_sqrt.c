/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:13:08 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/05 12:04:51 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb == 1)
		return (1);
	if (nb <= 2)
		return (0);
	while (x * x < nb)
		x++;
	if (nb % x == 0)
		return (x);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("Use case 1: %d should be: 0\n", ft_sqrt(0));
	printf("Use case 2: %d should be: 1\n", ft_sqrt(1));
	printf("Use case 3: %d should be: 2\n", ft_sqrt(4));
	printf("Use case 4: %d should be: 3\n", ft_sqrt(9));
	printf("Use case 5: %d should be: 4\n", ft_sqrt(16));
	printf("Use case 6: %d should be: 0\n", ft_sqrt(10));
	printf("Use case 7: %d should be: 5\n", ft_sqrt(25));
	printf("Use case 8: %d should be: 0\n", ft_sqrt(26));
	printf("Use case 9: %d should be: 0\n", ft_sqrt(-4));
	printf("Use case 10: %d should be: 0\n", ft_sqrt(214748364));
	return (0);
}*/

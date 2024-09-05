/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:07:42 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/04 12:11:08 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}*/

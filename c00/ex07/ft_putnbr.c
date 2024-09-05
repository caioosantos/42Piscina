/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:15:09 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/19 12:26:38 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c[10];

	c[10] = nb;
	write(1, &c, 10);
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}

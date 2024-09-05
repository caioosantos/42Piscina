/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:59:27 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/04 14:53:48 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (-1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}*/

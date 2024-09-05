/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:22:05 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/18 19:46:50 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		write(1, "Valor invalido!\n", 17);
	col = 1;
	while (col <= y && x > 0)
	{
		row = 1;
		while (row <= x)
		{
			if ((row > 1 && row < x) && (col > 1 && col < y))
				ft_putchar(' ');
			else if ((row > 1 && row < x) && (col == 1 || col == y))
				ft_putchar('-');
			else if ((row == 1 || row == x) && (col > 1 && col < y))
				ft_putchar('|');
			else
				ft_putchar('o');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
	return ;
}

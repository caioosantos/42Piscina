/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:16:41 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/21 21:17:39 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*int	main(void)
{
	int n[5] = {10, 2, 50, 13, 6};
	int i = 0;
	int s = 5;

	ft_rev_int_tab(n, s);
	while (i < s)
	{	
		printf("%d ", n[i]);
		i++;
	}
	return (0);
}*/

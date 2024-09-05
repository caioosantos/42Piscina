/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:54:05 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/04 17:14:22 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	cont;

	if (argc <= 1)
		return (0);
	cont = argc - 1;
	while (cont > 0)
	{
		j = 0;
		while (argv[cont][j] != '\0')
		{
			write(1, &argv[cont][j], 1);
			j++;
		}
		write(1, "\n", 1);
		cont--;
	}
	return (0);
}

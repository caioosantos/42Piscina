/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:34:34 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/29 12:28:17 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[cont] != '\0')
		cont++;
	return (cont);
}

int	main(int argc, char **argv)
{

	int 	n;
	if (argc <= 1)
		return (0);
	n = ft_strlcpy(argv[1], argv[2], 10);
	printf("%d\n", n);
	return (0);
}

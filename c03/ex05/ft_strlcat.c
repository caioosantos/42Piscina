/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:32:37 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/28 16:51:46 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	cont;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i >= size)
		return (size + j);
	cont = i + j;
	if (size != 0)
	{
		j = 0;
		while (src[j] != '\0' && i < (size - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (cont);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	printf("%d\n", ft_strlcat(argv[1], argv[2], 22));
	printf("%s\n", argv[1]);
	return (0);
}*/

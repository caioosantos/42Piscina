/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:47:52 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/30 16:09:50 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	 if (argc <= 1)
		 return (0);
	 printf("%d\n", ft_strlen(argv[1]));
	 return (0);
}*/

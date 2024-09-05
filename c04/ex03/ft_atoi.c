/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:32:56 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/09/02 10:23:42 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_special(char *str, int *flag)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*flag *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	flag;
	int	result;

	result = 0;
	flag = 1;
	str = ft_special(str, &flag);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * flag);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}*/

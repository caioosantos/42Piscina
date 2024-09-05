/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:08:50 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/28 09:28:46 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 0)
			{
				flag = 1;
				str[i] -= 32;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}
int	main(int argc, char **argv)
{
	char	*strg;

	if (argc <= 1)
		return (0);
	strg = ft_strcapitalize(argv[1]);
	printf("%s\n", strg);
	return (0);
}

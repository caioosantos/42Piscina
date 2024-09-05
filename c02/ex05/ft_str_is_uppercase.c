/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:59:31 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/26 10:07:35 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A') || !(str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	i = ft_str_is_uppercase(argv[1]);
	printf("%d\n", i);
	return (0);
}*/

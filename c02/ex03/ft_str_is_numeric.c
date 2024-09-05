/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:19:03 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/26 10:04:35 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0') || !(str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(int argc, char **argv)
{
	char 	i;

	i = ft_str_is_numeric(argv[1]);
	printf("%d\n", i);
	return (0);
}*/

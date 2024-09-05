/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:08:21 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/26 10:09:45 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		i++;
	}
	return (str);
}
/*int	main(int argc, char **argv)
{
	char	*strg;

	if (argc != 2)
		return (0);
	
	strg = ft_strupcase(argv[1]);
	printf("%s\n", strg);
	return (0);
}*/

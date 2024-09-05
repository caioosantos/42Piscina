/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:49:16 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/28 16:47:35 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j])
			&& str[i + j] != '\0' && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		if (str[i + j] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	return (0);
}*/

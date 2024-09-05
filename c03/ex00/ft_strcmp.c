/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:55:20 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/29 18:32:42 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*cmp1;
	char	*cmp2;
	char	*cmp3;

	if (argc <= 1)
		return (0);
	cmp1 = argv[1];
	cmp2 = argv[2];
	cmp3 = argv[3];
	printf("%d\n", ft_strcmp(cmp1, cmp2));
	printf("%d\n", ft_strcmp(cmp1, cmp3));
	printf("%d\n", ft_strcmp(cmp2, cmp3));
	return (0);
}

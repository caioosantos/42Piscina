/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:06:50 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/28 16:38:49 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	*s3;

	if (argc <= 1)
		return (0);

	s1 = argv[1];
	s2 = argv[2];
	s3 = argv[3];
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s3, 3));
	printf("%d\n", ft_strncmp(s2, s3, 3));
	return (0);
}*/

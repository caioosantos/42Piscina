/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:33:19 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/09/04 22:19:35 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>

char	*skip_header(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	return (str + i);
}

int	verify_lines(char *raw_line)
{
	int	i;
	int	line_length;
	int	current_length;

	i = 0;
	line_length = 0;
	current_length = 0;
	while (raw_line[i] != '\0')
	{
		if (raw_line[i] == '\n')
		{
			if (line_length == 0)
				line_length = current_length;
			else if (current_length != line_length)
				return (0);
			current_length = 0;
		}
		else
			current_length++;
		i++;
	}
	if (current_length != 0 && current_length != line_length)
		return (0);
	return (1);
}

int	validate_lines(char *raw_map)
{
	char	*map_no_header;

	map_no_header = skip_header(raw_map);
	if (!verify_lines(map_no_header))
	{
		write(1, &"map error\n", 11);
		return (0);
	}
	return (1);
}

int has_repeated_chars(char *header)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (header[i] == header[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate_characters(char *raw_map)
{
	int 	i;
	char header[4];

	i = 0;
    while (raw_map[i] != '\n' && raw_map[i] != '\0')
        i++;
	
	header[0] = raw_map[i - 1];
	header[1] = raw_map[i - 2];
	header[2] = raw_map[i - 3];
	header[3] = '\0';
	if (has_repeated_chars(header))
	{
		write(1, &"map error", 10);
		return (0);
	}
	return (1);
}
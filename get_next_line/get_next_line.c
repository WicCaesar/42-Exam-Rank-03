/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:10:03 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/23 01:21:07 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	int		byte;
	int		index;
	char	character;
	char	*buffer;

	byte = 0;
	index = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	byte = read(fd, &character, 1);
	while (byte > 0)
	{
		buffer[index++] = character;
		if (character == '\n')
			break ;
		byte = read(fd, &character, 1);
	}
	if (byte <= 0 && index == 0)
		return (free(buffer), NULL);
	buffer[index] = '\0';
	return (buffer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:22:25 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 16:40:51 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx++;
	while ((str[idx] != ' ' && str[idx] != '\t') && str[idx] != '\0')
		ft_putchar(str[idx++]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
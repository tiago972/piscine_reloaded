/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 10:59:38 by edbaudou          #+#    #+#             */
/*   Updated: 2019/02/26 11:25:57 by edbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_puterr(char *s)
{
	char	*cpy;

	cpy = s;
	while (*cpy)
	{
		write(2, cpy, 1);
		cpy++;
	}
	return (1);
}

int		ft_display_file(char *s)
{
	int		fd;
	char	buff[4096 + 1];
	int		ret;

	fd = open(s, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buff, 4096)))
			buff[ret] = '\0';
		ft_putstr(buff);
		close(fd);
		return (1);
	}
	return (-1);
}

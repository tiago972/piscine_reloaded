/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 10:52:05 by edbaudou          #+#    #+#             */
/*   Updated: 2019/02/28 10:30:01 by edbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_puterr("File name missing.\n");
		return (-1);
	}
	else if (ac > 2)
	{
		ft_puterr("Too many arguments.\n");
		return (-1);
	}
	else
		ft_display_file(av[1]);
	return (1);
}

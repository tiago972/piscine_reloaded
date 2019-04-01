/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:38:06 by edbaudou          #+#    #+#             */
/*   Updated: 2019/02/18 13:16:29 by edbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*tab;
	int		i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:42:04 by edbaudou          #+#    #+#             */
/*   Updated: 2019/02/07 21:53:46 by edbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		res;
	int		count;

	res = 1;
	count = 1;
	if (nb == 0)
		return (1);
	if (nb >= 13 || nb < 0)
		return (0);
	while (count <= nb)
	{
		res = res * count;
		count++;
	}
	return (res);
}

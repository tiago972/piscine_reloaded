/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 10:48:56 by edbaudou          #+#    #+#             */
/*   Updated: 2019/02/26 11:27:56 by edbaudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>

int		ft_puterr(char *s);
int		ft_display(char *s);
void	ft_putchar(char s);
void	ft_putstr(char *s);
int		ft_display_file(char *s);

#endif

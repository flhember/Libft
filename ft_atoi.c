/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:46:07 by flhember          #+#    #+#             */
/*   Updated: 2018/11/17 16:14:08 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	int				signe;
	unsigned int	rep;

	rep = 0;
	signe = 1;
	i = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		rep = (rep * 10) + str[i++] - 48;
	if (rep > 2147483647 && signe == 1)
		return (-1);
	if (rep > 2147483648 && signe == -1)
		return (0);
	return ((int)rep * signe);
}

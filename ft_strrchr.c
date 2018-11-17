/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:24:18 by flhember          #+#    #+#             */
/*   Updated: 2018/11/16 19:26:28 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char*)&s[size]);
		size--;
	}
	return (0);
}

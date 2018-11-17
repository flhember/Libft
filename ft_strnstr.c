/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:17:45 by flhember          #+#    #+#             */
/*   Updated: 2018/11/16 19:26:51 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		i;
	int		j;
	int		tmp;
	size_t	d;

	i = 0;
	j = 0;
	d = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && d <= len)
	{
		tmp = i;
		while (s1[i++] == s2[j++] && d <= len)
		{
			if (s2[j] == '\0')
				return ((char*)&s1[tmp]);
			d++;
		}
		j = 0;
		d++;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:53:52 by flhember          #+#    #+#             */
/*   Updated: 2018/11/10 20:54:33 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main()
{
//	char	dest[8] = "afsdfgh";
//	char	dest2[8] = "afsdfgh";
//	char	*s1 = "ca ve ca va";
//	char	*s2 = NULL;
//	int		c = 'f';
//	char	const *src = "bien4l";
//	size_t	i = 6;
	int		c = ',';
//	const char	*str = " 		2147483649";

	//printf("ft_moi = %s\n", ft_strcpy(dest, src));
	//printf("real ft = %s\n", strcpy(dest2, src));

	//printf("ft_moi = %s\n", ft_strncpy(dest, src, i));
	//printf("real ft = %s\n", strncpy(dest2, src, i));

	//ft_putstr("moi = ");
	//ft_putstr(ft_strncat(dest, src, i));
	//ft_putstr("\n real = ");
	//ft_putstr(strncat(dest2, src, i));

	//printf("moi = %lu\n", ft_strlcat(dest, src, i));
	//printf("real = %lu", strlcat(dest2, src, i));

	//ft_putstr("moi = ");
	//ft_putstr(ft_strrchr(dest, c));
	//ft_putstr("\nft_real = ");
	//ft_putstr(strrchr(dest2, c));

	//printf("moi = %s\n", ft_strnstr(s1, s2, i));
	//printf("real = %s\n", strnstr(s1, s2, i));
	
	//printf("moi = %d\n", ft_strncmp(s1, s2, i));
	//printf("real = %d\n", strncmp(s1, s2, i));

	//printf("moi = %d\n", ft_atoi(str));
	//printf("real = %d", atoi (str));

	printf("moi = %d\n", ft_tolower(c));
	printf("real = %d\n", tolower(c));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:53:52 by flhember          #+#    #+#             */
/*   Updated: 2018/11/15 17:13:46 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main()
{
//	char	dest[12] = "salut ca va";
//	char	dest2[12] = "salut ca va";
//	char	*s1 = "gded";
//	char	*s2 = "\0dede";
//	int		c = ':';
//	const char *src = "ca va";
//	size_t	i = 4;
//	int		c = ',';
//	const char	*str = " 		2147483649";
//	char str[50];
//	char str2[50];
//	int		c = ':';
//	const char src[50] = "http://www.tutorialspoint.com";
//	char dest[50];
//	char dest2[50];
	char	*s = "    salut   ";

	ft_strtrim(s);
	//memcmp
	//printf("real = %d\n", memcmp(s1,s2,i));
	//printf("moi = %d\n", ft_memcmp(s1, s2, i));
	//memchr
	/*printf("real = %s\n", memchr(s1, c, i));
	printf("moi = %s", ft_memchr(s1, c, i));*/

	//ft_memccpy
	/*strcpy(dest,"Hel:oooo!!");
	strcpy(dest2, "Hel:oooo!!");
	printf("Before ft_memcpy dest = %s\n", dest);
	printf("Before memcpy dest = %s\n", dest2);
	printf("real return = %s\n", memccpy(dest2, src, c, 6));
	printf("moi return = %s\n", ft_memccpy(dest, src, c, 6));
	printf("After ft_memcpy dest = %s\n", dest);
	printf("After memcpy dest = %s\n", dest2);*/

	//ft_memmove
	/*char dest[] = "oldstring";
	char dest2[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 2);
	ft_memmove(dest2, src, 2);
	printf("real = %s\n", dest);
	printf("moi = %s", dest2);*/

	//strcpy(str2, "this is string.h library function");
	//strcpy(str, "this is string.h library function");

	//memset(str2, '#', 50);
	//bzero(str2, 7);
	//ft_memset(str, '#', 50);
	//ft_bzero(str, 7);

	//ft_putstr("moi : ");
	//puts(str);
	//ft_putstr("real : ");
	//puts(str2);

	//printf("ft_moi = %s\n", ft_strcpy(dest, src));
	//printf("real ft = %s\n", strcpy(dest2, src));

	//printf("ft_moi = %s\n", ft_strncpy(dest, src, i));
	//printf("real ft = %s\n", strncpy(dest2, src, i));

	//ft_putstr("moi = ");
	//ft_putstr(ft_strncat(dest, src, i));
	//ft_putstr("\n real = ");
	//ft_putstr(strncat(dest2, src, i));

	//ft_strlcat
	//printf("moi = %lu\n", ft_strlcat(dest, src, i));
	//printf("real = %lu", strlcat(dest2, src, i));

	//ft_strchr
	//ft_putstr("moi = ");
	//ft_putstr(ft_strrchr(dest, c));
	//ft_putstr("\nft_real = ");
	//ft_putstr(strrchr(dest2, c));

	//ft_strstr, strnstr
	//printf("moi = %s\n", ft_strstr(s1, s2));
	//printf("real = %s\n", strstr(s1, s2));
	
	//printf("moi = %d\n", ft_strncmp(s1, s2, i));
	//printf("real = %d\n", strncmp(s1, s2, i));

	//printf("moi = %d\n", ft_atoi(str));
	//printf("real = %d", atoi (str));

	//printf("moi = %d\n", ft_tolower(c));
	//printf("real = %d\n", tolower(c));
	
	return (0);
}

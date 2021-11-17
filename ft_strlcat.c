/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 05:28:29 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/17 05:23:08 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (a > dstsize)
	{
		return (a + dstsize);
	}
	while (a + i < dstsize - 1)
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[a + i] = '\0';
	return (a + b);
}

// int main()
// {
//     char s[5] = "abcd";
//     char d[5] = "abcd";
//     char s1[10] = "abcd";
//     char d1[10] = "abcd";
//     size_t e = ft_strlcat(d1, s1,8);
//     printf("%zu\n", e);
//     printf("%s\n",d1);
//     size_t b = strlcat(d, s, 9);
//     printf("%zu\n", b);
//     printf("%s\n",d);
//     return(0);
// }

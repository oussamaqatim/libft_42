/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 05:28:29 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 02:47:50 by oqatim           ###   ########.fr       */
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
	size_t	r;

	a = ft_strlen(src);
	b = ft_strlen(dst);
	i = 0;
	r = 0;
	if (dstsize == 0)
		return (a);
	if (b < dstsize)
		r = a + b;
	else
		r = dstsize + a;
	while (src[i] && (b + 1) < dstsize)
	{
		dst[b] = src[i];
		i++;
		b++;
	}
	dst[b] = '\0';
	return (r);
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

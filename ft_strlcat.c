/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 05:28:29 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/15 02:06:26 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	k;

	i = 0;
	a = ft_strlen(dst);
	if (ft_strlen(dst) < dstsize)
		k = dstsize + ft_strlen(src);
	else
		k = ft_strlen(dst) + ft_strlen(src);
	while (a + i < dstsize - 1)
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[a + i] = '\0';
	return (k);
}

// int main()
// {
//     char s[20] = "abcd";
//     char d[20] = "abcd";
//     char s1[20] = "abcd";
//     char d1[20] = "abcd";
//     size_t e = ft_strlcat(d1, s1,7);
//     printf("%zu\n", e);
//     printf("%s\n",d1);
//     size_t b = strlcat(d, s, 7);
//     printf("%zu\n", b);
//     printf("%s\n",d);
//     return(0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 05:28:29 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/14 07:02:12 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

size_t	ft_strlcat(char  *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t a;

    i = 0;
    a = ft_strlen(dst);
    while (dstsize > 1)
    {
        dst[a+i] = src[i];
        i++;
        dstsize--;
    }
     dst[a+i] = '\0';
    return(ft_strlen(dst));
}

int main()
{
    char s[20] = "oussama";
    char d[20] = "samir";
    char s1[20] = "oussama";
    char d1[20] = "samir";
    size_t e = ft_strlcat(d1, s1, 15);
    printf("%zu\n", e);
    printf("%s\n",d1);
    size_t b = strlcat(d, s, 15);
    printf("%zu\n", b);
    printf("%s\n",d);
    return(0);
}

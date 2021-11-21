/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:01:12 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/21 13:43:40 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	o;

	i = 0;
	while (haystack[i] != '\0')
	{
		o = 0;
		while (haystack[i + o] == needle[o] && i + o < len)
		{
			o++;
			if (needle[o] == '\0')
			{
				return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:01:58 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/13 00:22:57 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		o;
	char	*ptr;

	ptr = (char *)s;
	o = ft_strlen(ptr);
	while (o >= 0)
	{
		if (ptr[o] == c)
		{
			return (&ptr[o]);
		}
		o--;
	}
	return (NULL);
}

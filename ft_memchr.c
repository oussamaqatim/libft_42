/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:00:04 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/12 23:50:25 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		j;
	char	*atr;

	if (s == NULL)
		return (NULL);
	atr = (char *)s;
	j = 0;
	while (s && atr[j] != '\0')
	{
		if (j < n)
		{
			if (atr[j] == c)
			{
				return (&atr[j]);
			}
		}
		j++;
	}
	return (NULL);
}

//int		main()
//{
//	char	s[];
//
//	s[] = "oussama";
//	printf("%s\n", memchr(s, 'z', 300));
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:00:32 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 05:25:06 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
// int		main()
// {
// 	char	b[8];

// 	b[8] = "oussama";
// 	printf("%s", ft_strchr(b, 'u'));
// 	return (0);
// }

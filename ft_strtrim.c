/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 05:08:21 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/28 22:05:43 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!s1)
		return (NULL);
	i = ft_strlen(s1);
	while (s1[j] && ft_strchr(set, s1[j]))
	{
		j++;
	}
	i -= 1;
	while (i && ft_strchr(set, s1[i]))
	{
		i--;
	}
	return (ft_substr (s1, j, i - j + 1));
}
// int main()
// {
// 	char s[] = "aaaaabbdkjhldaabbbaaa";
// 	char p[] = "ab";
// 	printf("%s\n",ft_strtrim(s,p));
// 	return (0);
// }

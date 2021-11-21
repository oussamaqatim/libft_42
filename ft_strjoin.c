/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 05:07:59 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/21 14:25:44 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t	i;
	size_t	o;
	char	*p;

	i = 0;
	o = 0; 
	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == 0)
		return (NULL);
	while(s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while(s2[o] != '\0')
	{
		p[i + o] = s2[o];
		o++;
	}
	p[i + o] = '\0';
	return(p);
}
int main()
{
	char s[] = "";
	char t[] = "";
	printf("%s\n",ft_strjoin(s,t));
	return(0);
}
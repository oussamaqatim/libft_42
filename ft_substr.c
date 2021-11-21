/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 05:07:44 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/20 12:27:27 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *p;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	else if (ft_strlen(s + start) < len)
		p = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	else 
		p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
    while(s[start] && i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
int main()
{
	char d[] = "hello_word";
	printf("%s\n",ft_substr(d,6,50));
	return(0); 
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:38:52 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/05 18:38:53 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
int ft_isdigit(int c)
{
    if (c <= '0' && c >= '9')
        return (1);
    else
        return (0);
}
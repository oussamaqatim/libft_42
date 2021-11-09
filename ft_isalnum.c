/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:38:34 by oqatim            #+#    #+#             */
/*   Updated: 2021/11/05 18:45:37 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>
int ft_isalnum(int c)
{
    if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}
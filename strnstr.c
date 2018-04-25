/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 12:25:31 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/25 12:25:42 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *htmp;
	char *ntmp;
	
	htmp = (char *)haystack;
    ntmp = (char *)needle;
    if (*ntmp == 0 || htmp == ntmp)
    	return (htmp);
    while (*htmp && (len > 0))
    {
    	if (*htmp == *ntmp)
    	{
    		while(*htmp++ == *ntmp++ && (--len > 0))
    			if(*ntmp == 0)
    				return ((char *)--haystack);
    	}
    	ntmp = (char *)needle;
    	htmp = (char *)haystack++;
    }
    return (NULL);
}
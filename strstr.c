/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:34:49 by dcortes           #+#    #+#             */
/*   Updated: 2016/12/03 17:42:06 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *htmp;
    char *ntmp;
	
	htmp = (char *)haystack;
    ntmp = (char *)needle;
    if (*ntmp == 0 || htmp == ntmp)
    	return (htmp);
    while (*htmp)
    {
    	if (*htmp == *ntmp)
    	{
    		while(*htmp++ == *ntmp++)
    			if(*ntmp == 0)
    				return ((char *)--haystack);
    	}
    	ntmp = (char *)needle;
    	htmp = (char *)haystack++;
    }
    return (NULL);
}
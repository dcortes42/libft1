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

char	*ft_strstr(const char *big, const char *little)
{
	unsigned char *tmp;
    unsigned char *ltmp;
    unsigned char *ttmp;
	
	tmp = (unsigned char *)big;
    ltmp = (unsigned char *)little;
    ttmp = (unsigned char *)little;
	if (ft_strlen(little) < 1 || ft_strcmp(big, little) == 0)
		return ((char *) big);
	while (*big != *little && ft_strlen(big) > 0)
		big++;
	if (*big == *little)
		tmp = (unsigned char *)big;
	while (*big == *little && (*big || *little))
	{
		big++;
		little++;
	}
	while (ft_strlen(big) > 0)
    {
        ttmp = ltmp;
        while (*big == *ttmp && (*big || *ttmp))
        {
            big++;
            ttmp++;
        }
        if (*big != *ttmp || (!*big || !*ttmp))
            break ;
    }
    if ((*big != *little) || (ft_strlen(little) > 0))
		tmp = NULL;
	return ((char *)tmp);
}

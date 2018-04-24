/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 03:42:13 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/20 03:42:36 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmps;
	unsigned char *tmpd;

	tmps = (unsigned char *)src;
	tmpd = (unsigned char *)dst;
	if (tmpd == tmps)
		return(dst);
	if (tmps < tmpd)
	{
		tmps = (unsigned char *)src + len -1;
		tmpd = dst + len -1;
		while(len--)
			*tmpd-- = *tmps--;
		tmpd++;
	}
	else
		while(len--)
			*tmpd++ = *tmps++;
	return (tmpd);
}
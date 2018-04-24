/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 18:02:01 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/19 18:02:12 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dstt;
	unsigned char *srct;

	dstt = (unsigned char *)dst;
	srct = (unsigned char *)src;
	while(n--)
		if ((*dstt++ = *srct++) == (unsigned char)c)
			return(dstt);
	return(NULL);
}
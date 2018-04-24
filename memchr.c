/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 12:55:24 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/21 12:55:35 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *stmp;

	stmp = (unsigned char *)s;
	while(--n)
		if (*++stmp == (unsigned char )c)
				return(stmp);
	return(NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 13:53:05 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/21 13:53:15 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s3;
	unsigned char *s4;

	if (s1 == s2 || n == 0)
		return (0);
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while(n--)
		{
			if(*s3 != *s4)
				return(*s3 - *s4);
				s3++;
				s4++;
		}
	return(0);
}
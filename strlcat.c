/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:43:45 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/23 15:44:00 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t n;
	
	i = 0;
	n = 0;
	if (size < 1)
		return (n + ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	n = i;
	while (src[i - n] && i < size - 1)
		{
			dst[i] = src[i - n];
			i++;
		}
	if (n < size)
		dst[i] = '\0';
	return (n + ft_strlen(src));
}
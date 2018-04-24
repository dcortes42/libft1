/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 17:32:31 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/21 17:33:34 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	char *tmp;

	tmp = dst;
	i = 0;
	while(*src && i++ < len)
			*dst++ = *src++;
	while (i++ < len)
			*dst++ = '\0';
	return(tmp);
}
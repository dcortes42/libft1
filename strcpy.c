/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 16:13:05 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/21 16:13:45 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char	*dst,	const char	*src)
{
	char *tmp;
	char *tmp2;
	size_t i;

	tmp = ft_strdup(src);
	i = ft_strlen(tmp) + 1;
	tmp2 = dst;
	while(i--)
		*dst++ = *tmp++;
	return(tmp2);
} 
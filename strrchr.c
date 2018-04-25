/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 16:49:41 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/24 16:49:57 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;
	size_t	n;
	char	*tmp;

	i = ft_strlen((char *)src);
	n = 0;
	tmp = (char *)src;
	while(n < i)
	{
		if (tmp[i] == c)
			return(&tmp[i]);
		i--;
	}
	return (NULL);
}
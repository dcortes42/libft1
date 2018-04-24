/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:20:14 by dcortes           #+#    #+#             */
/*   Updated: 2016/11/28 15:37:36 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 1;
	while (*s1 == *s2 && i < n)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
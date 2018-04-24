/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:35:26 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/23 15:35:29 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *append, const char *appendee, size_t n)
{
	char *tmp;
	size_t i;
	
	tmp = append;
	i = 0;
	while (*tmp)
		tmp++;
	while (*appendee && i++ < n)
		*tmp++ = *appendee++;
	*tmp = '\0';
	return (append);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:35:16 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/23 15:35:19 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *append, const char *appendee)
{
	char *tmp;
	
	tmp = append;
	while (*tmp)
		tmp++;
	while (*appendee)
		*tmp++ = *appendee++;
	*tmp = '\0';
	return (append);
}
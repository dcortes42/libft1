/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:05:31 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/21 15:06:06 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char *tmp;
	char *rtn;
	size_t i;

	i = ft_strlen(s1);
	tmp = (char *) malloc((i + 1)  * sizeof(char));
	rtn = tmp;

	if(!tmp)
		return(tmp);
	while(i--)
		*tmp++ = *(char *)s1++;
	*tmp = '\0';
	return(rtn);
}
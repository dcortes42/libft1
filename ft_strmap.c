/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 15:52:19 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/27 15:53:00 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const	*s, char (*f)(char))
{
	char	*stmp;
	char	*rtn;

	if (!s || !f)
		return(NULL);
	stmp = (char *) malloc((ft_strlen(s) + 1)  * sizeof(char));
	if (stmp == NULL)
		return(NULL);
	rtn = stmp;
	while(*s)
		*stmp++ = f(*s++);
	*stmp = '\0';
	return(rtn);
}
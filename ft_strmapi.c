/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 17:29:03 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/27 17:31:09 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char	*stmp;
	char	*rtn;
	unsigned int i;

	i = 0;
	if (!s || !f)
		return(NULL);
	stmp = (char *) malloc((ft_strlen(s) + 1)  * sizeof(char));
	if (stmp == NULL)
		return(NULL);
	rtn = stmp;
	while(*s)
		*stmp++ = f(i++, *s++);
	*stmp = '\0';
	return(rtn);
}
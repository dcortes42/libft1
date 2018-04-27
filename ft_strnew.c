/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 15:00:17 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/25 15:00:24 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;

	tmp = (char *) malloc((size + 1)  * sizeof(char));
	if (tmp == NULL)
		return(NULL);
	ft_bzero(tmp, (size + 1));
	return (tmp);
}
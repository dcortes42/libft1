/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:34:36 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/17 11:35:27 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int i;
	int n;

	n = 0;
	i = ft_isupper(c);
	if (i == 1)
		{
			n = c+32; 
		return(n);
		}
	return(c);
}
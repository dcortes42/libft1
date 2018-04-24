/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overlap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 16:21:49 by dcortes           #+#    #+#             */
/*   Updated: 2018/04/20 16:23:30 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_overlap(void	*dst, const void *src)
{
	return (dst + ft_strlen((const char *)dst) == src + ft_strlen((const char *)src));
}
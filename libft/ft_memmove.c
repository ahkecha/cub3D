/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:56:31 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/11 13:41:40 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (!srcc && !dstc)
		return (NULL);
	if (srcc < dstc)
	{
		while ((int)(--len) >= 0)
		{
			dstc[len] = srcc[len];
		}
	}
	else
	{
		while (++i < len)
			dstc[i] = srcc[i];
	}
	return (dst);
}

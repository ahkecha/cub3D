/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:09:27 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/02 14:22:54 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
	{
		i++;
		len = i;
	}
	while (src[len - i] != '\0' && len < size - 1)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (len < size)
		dst[len] = '\0';
	return (ft_strlen(src) + i);
}

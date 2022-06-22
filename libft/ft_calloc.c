/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:25:27 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/07 16:37:51 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	mem;

	if (size == 0)
		mem = count;
	else
		mem = count * size;
	p = malloc(mem);
	if (!p)
		return (NULL);
	return (ft_memset(p, 0, mem));
}

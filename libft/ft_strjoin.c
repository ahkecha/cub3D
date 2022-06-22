/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:13:48 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/11 13:27:06 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	join = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[j] != '\0')
	{
		join[i++] = s1[j++];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i++] = s2[j++];
	}
	join[i] = '\0';
	return (join);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:00:34 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/11 15:33:37 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_charcnt(const char *s, char d)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != d)
		{
			cnt++;
			while (s[i] && s[i] != d)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static char	*ft_strdup_till_delimiter(const char *s, char d)
{
	size_t	len;
	char	*ptr;

	len = 0;
	while (s[len] && s[len] != d)
		len++;
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

char	**ft_split(const char *s, char d)
{
	char	**ptr;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	len = ft_charcnt(s, d);
	ptr = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len && s[j])
	{
		if (s[j] != d)
		{
			ptr[i++] = ft_strdup_till_delimiter(&(s[j]), d);
			while (s[j] && s[j] != d)
				j++;
		}
		else
			j++;
	}
	return (ptr);
}

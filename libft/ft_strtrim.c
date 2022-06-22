/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:04:41 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/09 12:02:12 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_the_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && check_the_set(s1[start], set))
	{
		start++;
	}
	while (end > start && check_the_set(s1[end - 1], set))
	{
		end--;
	}
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

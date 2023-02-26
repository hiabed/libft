/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:11:06 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:40:24 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *)str);
	if (!len)
		return (0);
	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && i + j < len)
			{
				if (to_find[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

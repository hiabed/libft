/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:06:12 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:40:50 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j++] = s[i];
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char *s1 = "Helloworld";

// 	printf("the substr is: %s\n", ft_substr(s1, 5, 12));

// 	return (0);
// }

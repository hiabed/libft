/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:14:43 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:39:45 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	e;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	e = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && e < dstsize - 1)
	{
		dst[e] = src[i];
		e++;
		i++;
	}
	dst[e] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

// int	main(void)
// {
// 	char	*dst;
// 	char	*src;

// 	dst = "";
// 	src = "world";
// 	printf("%lu\n", ft_strlcat(dst, src, 0));
// 	printf("ft_strlcat = %s and src = %s\n", dst, src);
// 	printf("%lu\n", strlcat(dst, src, 0));
// 	printf("strlcat    = %s and src = %s\n", dst, src);
// 	return (0);
// }

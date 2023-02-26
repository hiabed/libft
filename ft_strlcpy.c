/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:46:00 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:39:54 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char dst[] = "fddfffdfg";
// 	char src[] = "howffdgds";

// 	// strncpy(dst, src, 4);
// 	// printf("original strncpy is :	dest = %s and src = %s\n", dst, src);

// 	ft_strlcpy(dst, src, 11);
// 	printf("---my ft_strlcpy is :	dest = %s and src = %s\n", dst, src);

// 	strlcpy(dst, src, 11);
// 	printf("original strlcpy is :	dest = %s and src = %s\n", dst, src);

// 	return (0);
// }

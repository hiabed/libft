/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:37:23 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:37:26 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	p_dest = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	dest[];
	char	source[];

	//overlap case is undifined;
	// char src[] = "abcdefghijkl";
	// ft_memmove(src + 2, src, 10 * sizeof(char));
	// printf("%s\n", src + 2);
	dest[] = "hello";
	source[] = "world";
	ft_memcpy(dest, source, 4 * sizeof(char));
	printf("original memcpy is: dest is ==> %s, and src is ==> %s\n", dest,
			source);
	memcpy(dest, source, 4 * sizeof(char));
	printf("original memcpy is: dest is ==> %s, and src is ==> %s\n", dest,
			source);
	return (0);
}*/
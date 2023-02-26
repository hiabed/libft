/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:37:54 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:37:58 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}

/*
int	main(void)
{
	char	b[];
	char	a[];

	b[] = "helloo";
	a[] = "helloo";
	printf("%s\n", ft_memset(b, 'c', 0 * sizeof(char)));
	printf("%s", memset(a, 'c', 0 * sizeof(char)));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:36:52 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:36:56 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char string[] = "hello world how are you?";

	printf("first occurrence of 'o' (memchr): %s\n", memchr(string, 'o', 8));

	printf("first occurre of 'o' (ft_memchr): %s\n", ft_memchr(string, 'o', 8));

	if (strchr(string, 'o') == NULL)
		printf("there is no 'o' here");

	return (0);
}*/

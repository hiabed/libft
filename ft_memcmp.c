/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:37:09 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:37:12 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	i = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_ptr[i] > s2_ptr[i] || s1_ptr[i] < s2_ptr[i])
			return (s1_ptr[i] - s2_ptr[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "hellooo";
	char s2[] = "hellboo";

	printf("original memcmp  is: %d\n", memcmp(s1, s2, 5));

	printf("my own ft_memcmp is: %d\n", ft_memcmp(s1, s2, 5));
	return (0);
}*/

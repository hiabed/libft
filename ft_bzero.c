/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:34:36 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:34:41 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}

// int	main(void)
// {
// 	char a[] = "hey";
// 	bzero(a, 3);
// 	printf("actual bzero is: %s\n", a);
// 	ft_bzero(a, 3);
// 	printf("my bzero is : %s\n", a);
// 	return (0);
// }

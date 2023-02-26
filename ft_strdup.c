/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:15:26 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:39:17 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	count;
	char	*ptr;
	size_t	i;

	count = ft_strlen(s1) + 1;
	ptr = (char *)malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main()
{
	char *ptr_1;
	ptr_1 = strdup("-2147483648");

	printf("%s\n", ptr_1);



	char *ptr_2;
	ptr_2 = ft_strdup("hello world!");
	
	printf("%s\n", ptr_2);
	return 0;
}*/

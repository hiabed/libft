/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:52:04 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:40:31 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	char string[] = "bello world how are you?";
//     char s[] = "tripouille";
// 	printf("last occurrence of 'o' (strrchr): %s\n", strrchr(s, 't' + 256));

// 	printf("last occurre of 'o' (ft_strrchr): %s\n", ft_strrchr(s, 't' + 256));

// 	if (strchr(string, 'o') == NULL)
// 		printf("there is no 'o' here");

// 	return 0;
// }

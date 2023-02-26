/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:12:46 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:40:09 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char my_toupper(unsigned int i, char c)
// {
// 	i = 0;
// 	return c - 32;
// }

// int main()
// {
// 	char *str = "hello";
// 	char *result = ft_strmapi(str, &my_toupper);
// 	printf("The result is: %s\n", result);
// 	return 0;
// }

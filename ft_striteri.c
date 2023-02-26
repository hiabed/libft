/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:16:59 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:39:25 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void my_func(unsigned int i, char *str)
// {
// 	*str += 32;
// 	printf("index = %d | the string is %s\n", i, str);
// }

// int main()
// {
// 	char str[10] = "HELLO";
// 	ft_striteri(str, my_func);
// 	printf("The result is %s\n", str);
// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:38:02 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:41:01 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main()
{
	char ch = 'W';
	printf("my ft_tolower is: %c => %c\n", ch, ft_tolower(ch));
	printf("tolower origi is: %c => %c\n", ch, tolower(ch));
	return 0;
}*/

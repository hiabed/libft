/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:32:31 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:41:08 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main(void)
{
	char ch = 'a';
	printf("my ft_toupper is: %c => %c\n", ch, ft_toupper(ch));
	printf("toupper origi is: %c => %c\n", ch, toupper(ch));	
	return (0);
}*/

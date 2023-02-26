/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:36:34 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:36:37 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_n(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = len_of_n(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	len--;
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
// int   main()
// {
//     printf("ft_itoa is: %s\n", ft_itoa(2147483647));
//     return (0);
// }

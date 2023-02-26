/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:24:12 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/06 17:38:12 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	char fd;
// 	fd = open("text", O_WRONLY | O_CREAT, 777);
// 	ft_putchar_fd('c', fd);
// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <mhassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:39:42 by mhassani          #+#    #+#             */
/*   Updated: 2023/02/24 18:24:05 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *ptr1 = ft_lstnew("1");
// 	t_list *ptr2 = ft_lstnew("2");
// 	ft_lstadd_front(&ptr1,ptr2);
// 	printf("%s\n",ptr1->content);
// }

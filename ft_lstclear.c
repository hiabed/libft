/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <mhassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:46:26 by mhassani          #+#    #+#             */
/*   Updated: 2023/02/25 17:27:33 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *ptr;
    while(*lst)
    {
        ptr = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = ptr;
    }
    *lst = 0;
}
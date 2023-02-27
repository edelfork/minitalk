/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:37:54 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/15 12:24:45 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*sup;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			sup = ft_lstlast(*lst);
			sup -> next = new;
		}
	}
}

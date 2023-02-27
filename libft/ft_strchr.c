/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:38:37 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/12 11:51:21 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	cont;

	cont = 0;
	while (str[cont] != 0)
	{
		if (str[cont] == (const char) c)
			return ((char *)&str[cont]);
		cont++;
	}
	if (str[cont] == (const char) c)
		return ((char *)&str[cont]);
	return (0);
}

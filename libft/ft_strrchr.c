/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:44:57 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/12 11:50:02 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	cont;

	cont = ft_strlen(str);
	while (cont >= 0)
	{
		if (str[cont] == (char)c)
			return ((char *)&str[cont]);
		cont--;
	}
	return (NULL);
}

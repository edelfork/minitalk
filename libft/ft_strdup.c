/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:29:25 by gimartin          #+#    #+#             */
/*   Updated: 2022/02/04 15:11:36 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != 0)
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = 0;
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*base;
	int		i;

	if (!src)
		return (NULL);
	i = ft_strlen(src);
	base = malloc(sizeof(char) * (i + 1));
	if (!base)
		return (NULL);
	base = ft_strcpy(base, (char *)src);
	return (base);
}

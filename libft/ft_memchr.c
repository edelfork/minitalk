/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:25:02 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/12 11:48:49 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		a;
	const unsigned char	*src;
	size_t				i;

	src = s;
	a = c;
	i = 0;
	while (i < n)
	{
		if (src[i] == a)
			return ((void *)(&src[i]));
		i++;
	}
	return (NULL);
}

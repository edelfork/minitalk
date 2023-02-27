/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:16:07 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/15 15:22:06 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	char		*lasts;
	char		*lastd;

	s = src;
	d = dst;
	if (!dst && !src)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = (char *)(s + (len - 1));
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}

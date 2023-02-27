/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:05:24 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/14 15:07:06 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	control(size_t len_dst, size_t dstsize, size_t len_src)
{
	size_t	res;

	res = 0;
	if (dstsize > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + dstsize;
	return (res);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	res = control(len_dst, dstsize, len_src);
	if (dstsize > 0 && len_dst <= dstsize)
	{
		while (s[i] && len_dst < dstsize - 1)
		{
			dst[len_dst] = s[i];
			len_dst++;
			i++;
		}
		dst[len_dst] = 0;
	}
	return (res);
}

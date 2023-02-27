/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:42:20 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/14 16:46:40 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	ret = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!ret || !s)
		return (NULL);
	while (s[i] != 0)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}

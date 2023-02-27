/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:49:42 by gimartin          #+#    #+#             */
/*   Updated: 2022/02/04 15:11:04 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	i2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (i + i2 + 1));
	if (!ret)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		ret[i] = s1[i];
	i2 = 0;
	while (*(s2 + i2) != '\0')
	{
		ret[i] = s2[i2];
		i++;
		i2++;
	}
	ret[i] = '\0';
	return (ret);
}

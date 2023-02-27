/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:47:00 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/14 08:55:38 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	cont;
	int	sig;

	num = 0;
	cont = 0;
	sig = 1;
	while (str[cont] == ' ' || (str[cont] > 8 && str[cont] < 14))
		cont++;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			sig *= -1;
		cont++;
	}
	if (!(str[cont] >= '0' && str[cont] <= '9'))
		return (0);
	while (str[cont] > 47 && str[cont] < 58)
	{
		num = (num * 10) + (str[cont] - 48);
		cont++;
	}
	return (num * sig);
}

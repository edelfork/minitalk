/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:03:49 by gimartin          #+#    #+#             */
/*   Updated: 2022/03/11 11:46:06 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static void	action(int sig)
{
	static int	rec = 0;

	if (sig == SIGUSR1)
		++rec;
	else
	{
		ft_putnbr_fd(rec, 1);
		ft_putchar_fd('\n', 1);
		return ;
	}
}

static void	ft_kill(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	ft_putstr_fd("Sent   : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Recived: ", 1);
	signal(SIGUSR1, action);
	signal(SIGUSR2, action);
	ft_kill(ft_atoi(argv[1]), argv[2]);
	return (0);
}

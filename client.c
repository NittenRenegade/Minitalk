/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:54:16 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/15 19:43:01 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"
#include "unistd.h"
#include "libft/libft.h"

void	send_string(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		c = *str++;
		i = 8;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(150);
		}
	}
}

static void	sent_counter(int sig)
{
	static int	g_sent = 0;

	if (sig == SIGUSR1)
		g_sent++;
	else
	{
		ft_putstr_fd("sent bytes: ", 1);
		ft_putnbr_fd(g_sent, 1);
		write(1, "\n", 1);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	int	server_pid;

	if (argc != 3 || 0 == ft_isnum(argv[1]) || ft_strlen(argv[2]) <= 0)
	{
		ft_putstr_fd("Bad params. Enter server PID and string to print", 1);
		return (0);
	}
	server_pid = ft_atoi(argv[1]);
	signal(SIGUSR1, sent_counter);
	signal(SIGUSR2, sent_counter);
	send_string(server_pid, argv[2]);
	usleep(160);
	sent_counter(SIGUSR2);
	return (0);
}

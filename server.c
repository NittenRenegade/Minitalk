/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:53:56 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/15 17:53:30 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "signal.h"
#include "unistd.h"
#include "libft/libft.h"

void	request_processor(int signo, siginfo_t *sinfo, void *context)
{
	static int				i = 0;
	static int				cur_pid = 0;
	static unsigned char	c = 0;

	context = NULL;
	if (cur_pid != sinfo->si_pid)
	{
		if (cur_pid)
			kill(cur_pid, SIGUSR2);
		i = 0;
		c = 0;
		cur_pid = sinfo->si_pid;
	}
	if (signo == SIGUSR1)
		c |= 1;
	if (++i == 8)
	{
		write(1, &c, 1);
		c = 0;
		i = 0;
		kill(cur_pid, SIGUSR1);
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	act;

	ft_memset(&act, 0, sizeof(struct sigaction));
	sigemptyset(&act.sa_mask);
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = request_processor;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	while (1)
		pause();
	return (0);
}

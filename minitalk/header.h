/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghat <amaghat@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:52:31 by amaghat           #+#    #+#             */
/*   Updated: 2021/07/05 18:05:26 by amaghat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
//# include <sys/wait.h>
//# define SIGUSR1 30
//# define SIGUSR2 31

typedef struct s_state
{
	char	current_char;
	int		current_bit;
}				t_state;

void		ft_putnbr(int nb);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
int			ft_strlen(const char *s);
int			ft_atoi(const char *s);
void		signal_sender(char c, pid_t pid);
void		signal_handler(int sig);

#endif
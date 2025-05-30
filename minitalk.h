/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:26:35 by fleite-j          #+#    #+#             */
/*   Updated: 2025/04/26 18:26:39 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
//# include <sys/siginfo.h>
# include <sys/types.h>

typedef struct s_message
{
	unsigned int	byte_i;
	unsigned char	current_pid;
	pid_t			client_pid;
}				t_message;

//Libft
size_t	ft_strlen(char *str);
int		ft_atoi(char *nptr);

#endif

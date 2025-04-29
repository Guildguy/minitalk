/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:17:38 by fleite-j          #+#    #+#             */
/*   Updated: 2025/04/29 19:17:42 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	main(int c, char **v)
{
	pid_t	server_pid;
	if (c != 3 || !ft_strlen(v[2]))
	{
		printf("Error to : %s\n", v[0]);
		return (EXIT_FAILURE);
	}
	server_pid = ft_atoi(v[1]);
	if (kill(server_pid, 0) == -1)
	{
		printf("Invalid PID: %s\n", v[1]);
		return (EXIT_FAILURE);
	}
}

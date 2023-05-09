/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rania <rania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:54:39 by tbesson           #+#    #+#             */
/*   Updated: 2023/05/09 17:13:35 by rania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*line;
	char	cwd[FILENAME_MAX];
	s_command *command;

	command = malloc(5 * sizeof(s_command *));
	while (1)
	{
		if (!getcwd(cwd, FILENAME_MAX))
			int_error_msg("getcwd went wrong");
		prompt(cwd);
		line = get_next_line(0);
		command = check_pipe(line, command);
		if (ft_strncmp(line, "exit", 4) == 0)
			break ;
	}
	free(line);
	return (0);
}

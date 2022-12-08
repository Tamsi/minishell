/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <tbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:54:39 by tbesson           #+#    #+#             */
/*   Updated: 2022/12/08 18:19:25 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*line;
	char	cwd[FILENAME_MAX];

	while (1)
	{
		if (!getcwd(cwd, FILENAME_MAX))
			int_error_msg("getcwd went wrong");
		prompt(cwd);
		line = get_next_line(0);
		if (ft_strncmp(line, "exit", 4) == 0)
			break ;
	}
	free(line);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rania <rania@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:51:08 by tbesson           #+#    #+#             */
/*   Updated: 2023/05/09 17:11:30 by rania            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MINISHELL_H_
# define _MINISHELL_H_

#include "libft.h"
#include <limits.h>

typedef struct t_command
{
	char **command;
} s_command;

s_command	*check_pipe(char *s, s_command *command);
int			int_error_msg(char *str);
void		*pointer_error_msg(char *str);
void		prompt(char *cwd);

#endif //_MINISHELL_H_

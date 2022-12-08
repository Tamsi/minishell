/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <tbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:51:08 by tbesson           #+#    #+#             */
/*   Updated: 2022/12/08 18:14:00 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MINISHELL_H_
# define _MINISHELL_H_

#include "libft.h"
#include <limits.h>

int		int_error_msg(char *str);
void	*pointer_error_msg(char *str);
void	prompt(char *cwd);

#endif //_MINISHELL_H_

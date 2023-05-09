# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rania <rania@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 19:29:13 by tbesson           #+#    #+#              #
#    Updated: 2023/05/09 16:59:02 by rania            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR	= sources
SRCS_NAME	= main.c	\
				utils.c	\
				check_pipe.c
OBJS_DIR	= objs
OBJS_NAME	= ${SRCS_NAME:.c=.o}
SRCS		= $(addprefix $(SRCS_DIR)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_DIR)/,$(OBJS_NAME))
LFT			= libft.a
INC			= -I ./includes -I ./libft
LIB			= -L ./libft -lft

NAME	= minishell

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g $(INC)

all:		$(LFT) $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -fsanitize=address -o $@ $^ $(LIB)

$(LFT):
			@make -s -C libft

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c
			@mkdir $(OBJS_DIR) 2> /dev/null || true
			$(CC) $(CFLAGS) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJS) $(OBJS_DIR)

fclean:		clean
			@make -s $@ -C libft
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

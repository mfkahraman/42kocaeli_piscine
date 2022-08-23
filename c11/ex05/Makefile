# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 19:16:11 by mukahram          #+#    #+#              #
#    Updated: 2022/08/11 19:16:12 by mukahram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c \
			  ft_calculator.c \
			  ft_putchar.c \
			  ft_putnbr.c \
			  ft_putstr.c \
			  main.c

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			gcc ${CFLAGS} $^ -o $@

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS}

fclean:
			rm -f ${OBJS}
			rm -f ${NAME}

re:			fclean all clean

.PHONY:		all clean fclean re

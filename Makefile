# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdonny <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 11:44:18 by sdonny            #+#    #+#              #
#    Updated: 2021/10/07 12:43:27 by sdonny           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

HEADERS = ft_list.h

CC = gcc

RM = rm -f

NAME = libft.a 

SOURCES = functions1.c

OBJS = $(patsubst %.c, %.o, ${SOURCES}) 

DFILES = $(patsubs %.c,%.d,${SOURCES})

%.o : %.c
	${CC} -c ${CFLAGS} $< -I ${HEADERS} -o ${<:.c=.o} -MD

include $(wildcard ${DFILES})

all:	${NAME}

${NAME}: ${OBJS} 
	ar rcs ${NAME} $?

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re

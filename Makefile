# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdonny <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 11:44:18 by sdonny            #+#    #+#              #
#    Updated: 2021/10/11 15:24:29 by sdonny           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

HEADERS = ft_list.h

CC = gcc

RM = rm -f

NAME = libft.a 

SOURCES = src/functions1.c src/functions2.c src/functions3.c src/functions4.c\
	src/functions5.c src/functions6.c src/functions7.c src/functions8.c

BONUS_SOURCES = bonus_src/bonus_functions1.c bonus_src/bonus_functions2.c

OBJS = $(patsubst %.c, %.o, ${SOURCES})

OBJS_BONUS = $(patsubst %.c, %.o, ${BONUS_SOURCES})

DFILES = $(patsubs %.c,%.d,${SOURCES})

%.o : %.c
	${CC} -c ${CFLAGS} $< -I ${HEADERS} -o ${<:.c=.o}

all:	${NAME}

${NAME}: ${OBJS} 
	ar rcs ${NAME} $?

bonus:
	make OBJ="${OBJS_BONUS}" all

clean:
	${RM} -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
	${RM} -f ${NAME}

re: fclean all

.PHONY:		all clean fclean re bonus

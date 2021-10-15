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

HEADERS = libft.h

CC = gcc

RM = rm -f

NAME = libft.a 

SOURCES = functions1.c functions2.c functions3.c functions4.c\
	functions5.c functions6.c functions7.c functions8.c\
	functions9.c

BONUS_SOURCES = functions1_bonus.c functions2_bonus.c

OBJS = $(patsubst %.c, %.o, ${SOURCES})

OBJS_BONUS = $(patsubst %.c, %.o, ${BONUS_SOURCES})

DFILES = $(patsubs %.c,%.d,${SOURCES})

%.o :	%.c ${HEADERS}
	${CC} -c ${CFLAGS} $< -I ${HEADERS} -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rcs ${NAME} $?

all bonus:	$(NAME)

$(NAME): $(OBJS) $(if $(findstring bonus, $(MAKECMDGOALS)), $(OBJS_BONUS))

clean:
	${RM} -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
	${RM} -f ${NAME}

re: fclean all

.PHONY:		all clean fclean re bonus

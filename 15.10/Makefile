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

HEADERS_DIR = ./

INCLUDE = -I ${HEADERS_DIR}

HEADERS_FILES = libft.h

HEADERS = ${addprefix ${HEADERS_DIR}, ${HEADERS_FILES}}

CC = gcc

RM = rm -f

NAME = libft.a 

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(patsubst %.c, %.o, ${SOURCES})

OBJS_BONUS = $(patsubst %.c, %.o, ${BONUS_SOURCES})

DFILES = $(patsubs %.c,%.d,${SOURCES})

%.o :	%.c ${HEADERS}
	${CC} -c ${CFLAGS} $< ${INCLUDE} -o ${<:.c=.o}

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

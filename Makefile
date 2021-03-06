# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 10:07:40 by aahsan            #+#    #+#              #
#    Updated: 2022/07/19 12:49:42 by aahsan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c \
		ft_memchr.c ft_memcpy.c ft_memcmp.c
OBJS	= ${SRCS:.c=.o}
HEADER	= includes
GCC		= gcc -Wall -Wextra -Werror
FILE	= libft.a
RM		= rm -f

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${HEADER}

${FILE}:	${OBJS}
	ar rcs ${FILE} ${OBJS}

all:	${FILE}

clean:
	${RM} ${FILE}

fclean: clean
	${RM} ${FILE}

oclean:
	${RM} ${OBJS}

re:		fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 16:28:58 by vgejno            #+#    #+#              #
#    Updated: 2021/12/23 19:39:27 by vgejno           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_atoi.c \
 		ft_bzero.c \
 		ft_calloc.c \
 		ft_isalnum.c \
 		ft_isalpha.c \
 		ft_isascii.c \
 		ft_isdigit.c \
 		ft_isprint.c \
 		ft_itoa.c \
 		ft_memchr.c \
 		ft_memcmp.c \
 		ft_memcpy.c \
 		ft_memmove.c \
 		ft_memset.c \
 		ft_putendl_fd.c \
 		ft_putnbr_fd.c \
 		ft_split.c \
 		ft_strchr.c \
 		ft_strdup.c \
 		ft_striteri.c \
 		ft_strjoin.c \
 		ft_strlcat.c \
 		ft_strlcpy.c \
 		ft_strlen.c \
 		ft_strmapi.c \
 		ft_strncmp.c \
 		ft_strnstr.c \
 		ft_strrchr.c \
 		ft_strtrim.c \
 		ft_substr.c \
 		ft_tolower.c \
 		ft_toupper.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = RM -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ${OBJS}
	ar rcs $@ $^

%.o : %.c
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all
.PHONY: clean fclean re
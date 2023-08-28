# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 22:22:03 by vgejno            #+#    #+#              #
#    Updated: 2022/10/15 16:56:04 by vgejno           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 			= push_swap

CC 				= gcc

CFLAGS 			= -g -Wall -Wextra -Werror

DEBUG	=		-fno-omit-frame-pointer #-fsanitize=address

SRCS 			= $(wildcard *.c)

OBJS 			= ${SRCS:.c=.o}

RM 				= rm -f

LIBFT_DIR = libft
LIBFT = /libft/libft.a

INCLUDE	=	-L $(LIBFT_DIR) -lft

all: ${NAME}

$(NAME):	$(OBJS)
				$(MAKE) -C $(LIBFT_DIR)
				$(CC) $(OBJS) $(CFLAGS) $(DEBUG) $(INCLUDE) -o $(NAME)

clean:
				@${RM} $(OBJS)
				make clean -C $(LIBFT_DIR)

fclean:			clean
				@${RM} $(NAME)
				make fclean -C $(LIBFT_DIR)		

re:				fclean all
.PHONY:			all clean fclean re

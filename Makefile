# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarouf <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/17 03:27:03 by cmarouf           #+#    #+#              #
#    Updated: 2021/10/17 03:27:18 by cmarouf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= srcs/ft_get_declen.c 	\
			  srcs/ft_get_hexlen.c	\
			  srcs/ft_printf.c		\
			  srcs/ft_putaddr.c		\
			  srcs/ft_putcentage.c	\
			  srcs/ft_putchar.c		\
			  srcs/ft_putcharf.c	\
			  srcs/ft_putnbr_base.c	\
			  srcs/ft_putnbrf.c		\
			  srcs/ft_putstrf.c		\
			  srcs/ft_putunbr.c		\
		

OBJS 		= ${SRCS:.c=.o}

RM 			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

NAME		= libftprintf.a

CC 			= gcc

.c.o:
					${CC} -I includes ${CFLAGS} -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME): 	${OBJS}
					ar -rcs $(NAME) ${OBJS}

clean:
					${RM} ${OBJS} ${OBJS_bonus}

fclean:		clean
					${RM} $(NAME)

re:			fclean all
					
.PHONY: all clean fclean re bonus

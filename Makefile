# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 15:37:41 by coskelet          #+#    #+#              #
#    Updated: 2022/03/15 20:35:24 by coskelet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SERVER	=	server
CLIENT	=	client

SRCS_S	=	server.c
SRCS_C	=	client.c

LIBFT	= libft

.PHONY:	all clean fclean re bonus

OBJS_S	= ${SRCS_S:.c=.o}
OBJS_C	= ${SRCS_C:.c=.o}

%o : %c
			${CC} ${CFLAGS} -c $< -o $@

CC		= cc
RM		= rm -rf
AR		= ar -rcs
CFLAGS	= -Wall -Wextra -Werror
SANIT	= -g -fsanitize=address

all:		server client

$(SERVER):	${OBJS_S} ${LIBFT}.a
			${CC} ${CFLAGS} ${OBJS_S} -L ./${LIBFT} -lft -o $@

$(CLIENT):	${OBJS_C} ${LIBFT}.a
			${CC} ${CFLAGS} ${OBJS_C} -L ./${LIBFT} -lft -o $@

bonus:
			@make all

$(LIBFT).a:
			@make -C ${LIBFT}
			@cp ${LIBFT}/${LIBFT}.a ./${LIBFT}.a

clean:
			${RM} ${OBJS_S} ${OBJS_C}
			@make clean -C ${LIBFT}

fclean:		clean
			${RM} ${SERVER} ${CLIENT}
			${RM} ${LIBFT}.a
			@make fclean -C ${LIBFT}

re:			fclean
			@make all	

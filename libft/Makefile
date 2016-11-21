#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 19:15:26 by elcarrei          #+#    #+#              #
#    Updated: 2016/11/20 18:53:53 by elcarrei         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libft.a

SRC			=	$(shell ls | grep -E "ft_")

OBJ			=	$(SRC:.c=.o)

INC			=	./

CFLAGS		=	-Wall -Wextra -Werror

CC			=	/usr/bin/gcc

RM			=	/bin/rm -f


all		:		$(NAME)

$(NAME)	:
				$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

clean	:
				$(RM) $(OBJ)

fclean	:		clean
				$(RM) $(NAME)

re		:		clean fclean all

.PHONY	:		all clean fclean re
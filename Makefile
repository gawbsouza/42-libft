# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 14:02:53 by gasouza           #+#    #+#              #
#    Updated: 2022/04/06 14:41:53 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####	Names
NAME	= libft.a
SRCS	= ft_isalpha.c

####	Commands
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
AR		= ar -rc
RM		= rm -f

####	Auxiliaries
OBJS	= $(SRCS:.c=.o)

####	Phony
.PHONY: all clean fclean re

####	Logic
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
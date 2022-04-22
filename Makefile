# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 14:02:53 by gasouza           #+#    #+#              #
#    Updated: 2022/04/21 18:27:30 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####	Names
NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
          ft_tolower.c ft_toupper.c ft_strlen.c ft_memset.c ft_strchr.c    \
		  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_memcpy.c    \
		  ft_memmove.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c   \
		  ft_atoi.c ft_strdup.c ft_calloc.c ft_strtrim.c ft_substr.c ft_strjoin.c \
		  ft_split.c ft_itoa.c

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
	
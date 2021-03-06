# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 14:02:53 by gasouza           #+#    #+#              #
#    Updated: 2022/04/28 12:55:30 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c	ft_tolower.c	ft_toupper.c	ft_strlen.c		\
          	ft_memset.c		ft_strchr.c		ft_strrchr.c	ft_strncmp.c	\
		  	ft_memchr.c		ft_memcmp.c		ft_memcpy.c		ft_memmove.c	\
		  	ft_bzero.c		ft_strlcpy.c	ft_strlcat.c	ft_strnstr.c	\
			ft_atoi.c		ft_strdup.c		ft_calloc.c		ft_strtrim.c	\
			ft_substr.c		ft_strjoin.c	ft_split.c		ft_itoa.c		\
		  	ft_striteri.c	ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c	\
			ft_putendl_fd.c	ft_putnbr_fd.c

B_SRC	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c		\
			ft_lstsize.c

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
AR		=	ar -rc
RM		=	rm -f
OBJS	=	$(SRCS:.c=.o)
B_OBJS	=	$(B_SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(B_OBJS)
	$(AR) $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

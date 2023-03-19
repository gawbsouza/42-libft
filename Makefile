# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 14:02:53 by gasouza           #+#    #+#              #
#    Updated: 2023/03/19 18:56:40 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS_D	=	src
INCS_D	=	inc

SRCS_F	= 	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c	ft_tolower.c	ft_toupper.c	ft_strlen.c		\
          	ft_memset.c		ft_strchr.c		ft_strrchr.c	ft_strncmp.c	\
		  	ft_memchr.c		ft_memcmp.c		ft_memcpy.c		ft_memmove.c	\
		  	ft_bzero.c		ft_strlcpy.c	ft_strlcat.c	ft_strnstr.c	\
			ft_atoi.c		ft_strdup.c		ft_calloc.c		ft_strtrim.c	\
			ft_substr.c		ft_strjoin.c	ft_split.c		ft_itoa.c		\
		  	ft_striteri.c	ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c	\
			ft_putendl_fd.c	ft_putnbr_fd.c
			
SRCS	= 	$(addprefix $(SRCS_D)/, $(SRCS_F))

B_SRC	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c		\
			ft_lstsize.c
			
OBJS	=	$(SRCS:.c=.o)
B_OBJS	=	$(B_SRC:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra
COMPILER=	gcc $(CFLAGS) -I $(INCS_D) -c
AR		=	ar -rc
RM		=	rm -f

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

.PHONY: bonus
bonus: $(B_OBJS)
	$(AR) $(NAME) $^

%.o: %.c
	$(COMPILER) $< -o $@

.PHONY: clean
clean:
	$(RM) $(OBJS) $(B_OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

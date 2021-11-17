# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 23:09:21 by mouarsas          #+#    #+#              #
#    Updated: 2021/11/16 23:48:11 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC =	ft_strncmp.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c \
		ft_memset.c\
		ft_strlcat.c \
		ft_isalnum.c\
		ft_isascii.c\
		ft_bzero.c \
		ft_memcpy.c \
		ft_strlen.c\
		ft_memchr.c \
		ft_calloc.c\
		ft_isdigit.c\
		ft_strlcpy.c \
		ft_strchr.c\
		ft_strrchr.c\
		ft_isprint.c\
		ft_strnstr.c\
		ft_memmove.c\
		ft_strdup.c\
		ft_isalpha.c\



OBJECTS = $(SRC:.c=.o)



all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)


clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

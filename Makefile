# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 23:13:07 by oqatim            #+#    #+#              #
#    Updated: 2021/11/21 13:45:34 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c \
		ft_memset.c ft_strlcat.c ft_isalnum.c ft_isascii.c \
		ft_bzero.c ft_memcpy.c ft_strlen.c ft_memchr.c \
		ft_calloc.c ft_isdigit.c ft_strlcpy.c ft_strchr.c \
		ft_strrchr.c ft_isprint.c ft_strnstr.c  \
		ft_strdup.c ft_isalpha.c ft_substr.c ft_strjoin.c \

LIB = libft.h
		
OBJ = $(FILES:.c=.o)


all : $(NAME)

FLAGS = -Wall -Wextra -Werror
	
$(NAME): $(OBJ) $(LIB)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean :  
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
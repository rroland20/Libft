# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rroland <rroland@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 20:19:26 by rroland           #+#    #+#              #
#    Updated: 2020/11/15 16:22:25 by rroland          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGC = -Wall -Wextra -Werror -c -I ./

SOURCES = ft_isdigit.c	ft_memset.c	ft_strnstr.c \
ft_atoi.c	ft_isprint.c	ft_strchr.c	ft_strrchr.c \
ft_bzero.c	ft_memccpy.c	ft_strdup.c	ft_tolower.c \
ft_calloc.c	ft_memchr.c	ft_strlcat.c	ft_toupper.c \
ft_isalnum.c	ft_memcmp.c	ft_strlcpy.c \
ft_isalpha.c	ft_memcpy.c	ft_strlen.c \
ft_isascii.c	ft_memmove.c	ft_strncmp.c	ft_substr.c \
ft_strjoin.c	ft_strtrim.c 	ft_putchar_fd.c \
ft_putstr_fd.c	ft_putendl_fd.c ft_putnbr_fd.c \
ft_strmapi.c ft_split.c	ft_itoa.c

SOURCE_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCE_BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGC) -c $< -o $@

$(NAME):$(OBJECTS)
	ar rc $@ $^
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS) $(OBJECTS_BONUS)
		ar rc $(NAME) $^
		ranlib $(NAME)

.PHONY: all clean fclean re bonus
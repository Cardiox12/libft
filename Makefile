# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbellavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 09:34:32 by bbellavi          #+#    #+#              #
#    Updated: 2019/10/09 09:36:48 by bbellavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
INC_DIR = .
SRC_DIR = srcs
SRCS	= ft_strlen.c
SRCS	+= ft_memset.c
SRCS	+= ft_bzero.c
SRCS	+= ft_memcpy.c
SRCS	+= ft_memccpy.c
SRCS	+= ft_memmove.c
SRCS	+= ft_memchr.c
SRCS	+= ft_memcmp.c
SRCS	+= ft_strdup.c
SRCS	+= ft_strcpy.c
SRCS	+= ft_strncpy.c
SRCS	+= ft_strcat.c
SRCS	+= ft_strncat.c
SRCS	+= ft_strlcat.c
SRCS	+= ft_strchr.c
SRCS	+= ft_strrchr.c
SRCS	+= ft_strstr.c
SRCS	+= ft_strnstr.c
SRCS	+= ft_strcmp.c
SRCS	+= ft_strncmp.c
SRCS	+= ft_atoi.c
SRCS	+= ft_isalpha.c
SRCS	+= ft_isdigit.c
SRCS	+= ft_toupper.c
SRCS	+= ft_tolower.c
SRCS	+= ft_memalloc.c
SRCS	+= ft_memdel.c
SRCS	+= ft_strnew.c
SRCS	+= ft_strdel.c
SRCS	+= ft_strclr.c
SRCS	+= ft_striter.c
SRCS	+= ft_striteri.c
SRCS	+= ft_strmap.c
SRCS	+= ft_strmapi.c
SRCS	+= ft_strequ.c
SRCS	+= ft_strnequ.c
SRCS	+= ft_strsub.c
SRCS	+= ft_strjoin.c
SRCS	+= ft_strtrim.c
SRCS	+= ft_strsplit.c
SRCS	+= ft_putchar.c
SRCS	+= ft_putstr.c
SRCS	+= ft_putendl.c
SRCS	+= ft_putnbr.c
SRCS	+= ft_putchar_fd.c
SRCS	+= ft_putstr_fd.c
SRCS	+= ft_putchar_fd.c
SRCS	+= ft_putendl_fd.c
SRCS	+= ft_putnbr_fd.c
SRCS	+= ft_lstnew.c
SRCS	+= ft_lstdelone.c
SRCS	+= ft_lstdel.c
SRCS	+= ft_lstadd.c
SRCS	+= ft_lstiter.c
SRCS	+= ft_lstmap.c
SRCS	+= ft_strlcpy.c
SRCS	+= ft_calloc.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $?
	ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^ -I $(INC_DIR)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

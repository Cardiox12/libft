# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 09:34:32 by bbellavi          #+#    #+#              #
#    Updated: 2019/10/22 14:53:39 by bbellavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
INC_DIR = .
INC_F	= $(INC_DIR)/libft.h
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
SRCS	+= ft_strlcat.c
SRCS	+= ft_strchr.c
SRCS	+= ft_strrchr.c
SRCS	+= ft_strnstr.c
SRCS	+= ft_strncmp.c
SRCS	+= ft_atoi.c
SRCS	+= ft_itoa.c
SRCS	+= ft_isalpha.c
SRCS	+= ft_isascii.c
SRCS	+= ft_isalnum.c
SRCS	+= ft_isdigit.c
SRCS	+= ft_toupper.c
SRCS	+= ft_tolower.c
SRCS	+= ft_strmapi.c
SRCS	+= ft_substr.c
SRCS	+= ft_strjoin.c
SRCS	+= ft_strtrim.c
SRCS	+= ft_split.c
SRCS	+= ft_putchar_fd.c
SRCS	+= ft_putstr_fd.c
SRCS	+= ft_putchar_fd.c
SRCS	+= ft_putendl_fd.c
SRCS	+= ft_putnbr_fd.c
SRCS	+= ft_strlcpy.c
SRCS	+= ft_calloc.c


SRCS_BONUS	= ft_lstnew_bonus.c
SRCS_BONUS	+= ft_lstdelone_bonus.c
SRCS_BONUS	+= ft_lstadd_front_bonus.c
SRCS_BONUS	+= ft_lstadd_back_bonus.c
SRCS_BONUS	+= ft_lstclear_bonus.c
SRCS_BONUS	+= ft_lstiter_bonus.c
SRCS_BONUS	+= ft_lstmap_bonus.c
SRCS_BONUS	+= ft_lstsize_bonus.c
SRCS_BONUS	+= ft_lstlast_bonus.c
SRCS_BONUS	+= ft_strnew_bonus.c
SRCS_BONUS	+= ft_strcpy_bonus.c
SRCS_BONUS	+= ft_isset_bonus.c
SRCS_BONUS	+= ft_strisset_bonus.c
SRCS_BONUS	+= ft_isspace_bonus.c

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)
NAME	= libft.a

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(INC_F)
	ar rc $@ $?
	ranlib $@

%.o: %.c $(INC_F)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC_DIR)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $?
	ranlib $(NAME)

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

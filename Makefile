# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tony <tony@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 09:59:18 by tony              #+#    #+#              #
#    Updated: 2020/04/30 09:59:18 by tony             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_NC			= \e[0m
COLOR_LIGHT_GREEN	= \e[1;32m

CC			= gcc
NAME		= libft.a
TEST_NAME	= test
CFLAGS		= -g -DDEBUG

INCLUDES	= includes
INC_FILES	= $(INCLUDES)/ft_stdio.h\
$(INCLUDES)/ft_strings.h\
$(INCLUDES)/ft_stdlib.h\
$(INCLUDES)/ft_ctypes.h\
$(INCLUDES)/ft_objects.h

BASE_DIR	= src
STDIO_DIR	= $(BASE_DIR)/ft_stdio
STRING_DIR	= $(BASE_DIR)/ft_strings
STDLIB_DIR	= $(BASE_DIR)/ft_stdlib
CTYPES_DIR	= $(BASE_DIR)/ft_ctypes
OBJECTS_DIR = $(BASE_DIR)/ft_objects
TEST_DIR	= tests

SRCS	= $(STDIO_DIR)/ft_putchar_fd.c
SRCS	= $(STDIO_DIR)/ft_putendl_fd.c
SRCS	+= $(STDIO_DIR)/ft_putstr_fd.c
SRCS	+= $(STDIO_DIR)/ft_putnbr_fd.c

SRCS	+= $(STRING_DIR)/ft_bzero.c
SRCS	+= $(STRING_DIR)/ft_memccpy.c
SRCS	+= $(STRING_DIR)/ft_memchr.c
SRCS	+= $(STRING_DIR)/ft_memcmp.c
SRCS	+= $(STRING_DIR)/ft_memcpy.c
SRCS	+= $(STRING_DIR)/ft_memmove.c
SRCS	+= $(STRING_DIR)/ft_memset.c
SRCS	+= $(STRING_DIR)/ft_split.c
SRCS	+= $(STRING_DIR)/ft_strchr.c
SRCS	+= $(STRING_DIR)/ft_strdup.c
SRCS	+= $(STRING_DIR)/ft_strndup.c
SRCS	+= $(STRING_DIR)/ft_strjoin.c
SRCS	+= $(STRING_DIR)/ft_strlcat.c
SRCS	+= $(STRING_DIR)/ft_strlcpy.c
SRCS	+= $(STRING_DIR)/ft_strncpy.c
SRCS	+= $(STRING_DIR)/ft_strlen.c
SRCS	+= $(STRING_DIR)/ft_strmapi.c
SRCS	+= $(STRING_DIR)/ft_strncmp.c
SRCS	+= $(STRING_DIR)/ft_strnstr.c
SRCS	+= $(STRING_DIR)/ft_strrchr.c
SRCS	+= $(STRING_DIR)/ft_strtrim.c
SRCS	+= $(STRING_DIR)/ft_substr.c
SRCS	+= $(STRING_DIR)/ft_tolower.c
SRCS	+= $(STRING_DIR)/ft_toupper.c

SRCS	+= $(STDLIB_DIR)/ft_realloc.c
SRCS	+= $(STDLIB_DIR)/ft_atoi.c
SRCS	+= $(STDLIB_DIR)/ft_calloc.c
SRCS	+= $(STDLIB_DIR)/ft_itoa.c
SRCS	+= $(STDLIB_DIR)/garbage_add_ref.c
SRCS	+= $(STDLIB_DIR)/garbage_free_all.c
SRCS	+= $(STDLIB_DIR)/garbage_free.c
SRCS	+= $(STDLIB_DIR)/garbage_find_ref.c
SRCS	+= $(STDLIB_DIR)/garbage_update_ref.c
SRCS	+= $(STDLIB_DIR)/malloc_wrapper.c
SRCS	+= $(STDLIB_DIR)/realloc_wrapper.c

SRCS	+= $(CTYPES_DIR)/ft_isalnum.c
SRCS	+= $(CTYPES_DIR)/ft_isalpha.c
SRCS	+= $(CTYPES_DIR)/ft_isascii.c
SRCS	+= $(CTYPES_DIR)/ft_isdigit.c
SRCS	+= $(CTYPES_DIR)/ft_isprint.c

SRCS	+= $(OBJECTS_DIR)/StringList_init.c
SRCS	+= $(OBJECTS_DIR)/StringList_insert.c
SRCS	+= $(OBJECTS_DIR)/StringList_append.c
SRCS	+= $(OBJECTS_DIR)/StringList_pop.c
SRCS	+= $(OBJECTS_DIR)/StringList_pop_last.c

OBJS	= $(SRCS:.c=.o)
.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(OBJS) $(INC_FILES)
	@printf "$(COLOR_LIGHT_GREEN)Building library$(COLOR_NC)\n"
	@ar -rcs $@ $?

test: $(NAME) $(TEST_DIR)/test_StringList.c
	@$(CC) $(CFLAGS) -o $(TEST_NAME) $(TEST_DIR)/test_StringList.c $(NAME) -I $(INCLUDES) -lcriterion
	@./test

%.o: %.c
	@printf "$(COLOR_LIGHT_GREEN)Compiling $(@:.o=) $(COLOR_NC)\n"
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDES)

clean:
	@printf "$(COLOR_LIGHT_GREEN)Removing objects files$(COLOR_NC)\n"
	@rm -rf $(OBJS)
	@rm -rf $(TEST_NAME)
	@rm -rf $(TEST_NAME).dSYM

fclean: clean
	@printf "$(COLOR_LIGHT_GREEN)Removing library$(COLOR_NC)\n"
	@rm -rf $(NAME)

re: fclean all

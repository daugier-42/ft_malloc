# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 17:27:12 by daugier           #+#    #+#              #
#    Updated: 2018/06/11 17:27:13 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

NAME = libft_malloc_$(HOSTTYPE).so

NAME_LIEN = libft_malloc.so

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I header/

LIBS = libft/libft.a

SRCS =	srcs/ft_malloc.c \
		srcs/ft_free.c \
		srcs/ft_realloc.c \

OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ)
	make -C libft
	@echo "Libft Compiled"
	$(CC) $(CFLAGS) $(LIBS) $(OBJ) -shared -o $(NAME) 
	ln -f -F -s $(NAME) $(NAME_LIEN)
	@echo "Libft_malloc ready to work !"

all : $(NAME)

clean :
	make clean -C libft
	@echo ".o Libft delete"
	@$(RM) $(OBJ)
	@echo ".o libft_malloc .o  delete"

fclean : clean
	$(RM) libft/libft.a
	@echo "libft.a delete"
	$(RM) $(NAME)
	$(RM) $(NAME_LIEN)
	@echo "$(NAME)  delete"

re : fclean all

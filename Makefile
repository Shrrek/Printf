# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 18:31:36 by jperales          #+#    #+#              #
#    Updated: 2021/10/20 17:05:54 by jperales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB =	libft/

O = objs/
I = incs/
S = srcs/

SRC =	$Sft_printf.c\
		$Sft_chars.c\
		$Sft_numbers.c\
		$Sft_itoa_base.c\

OBJS = $(SRC:$S%.c=$O%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBC = ar rcs

RM = rm -f

all: $(NAME)

$O:
	mkdir $@

$(OBJS): | $O

$(OBJS): $O%.o: $S%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) -C $(LIB)
	cp -np libft/libft.a $(NAME)
	$(LIBC) $@ $^

clean:
	-rm -r $O
	$(MAKE) clean -C $(LIB)

fclean: clean
	-rm -r $(NAME) 
	$(MAKE) fclean -C $(LIB)

re: fclean all

.PHONY: all clean fclean re

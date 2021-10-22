# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 18:31:36 by jperales          #+#    #+#              #
#    Updated: 2021/10/13 18:41:31 by jperales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_itoa.c\
		ft_unitoa.c\

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBC = ar rcs

RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $@ $^

clean:
	$(RM) $(OBJS) 
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

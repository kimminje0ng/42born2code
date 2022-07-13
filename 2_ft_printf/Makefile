# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 16:17:09 by minjeki2          #+#    #+#              #
#    Updated: 2022/07/13 16:17:09 by minjeki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CM = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils2.c

CNVRT = $(SRC:.c=.o)

INCLUDE = ft_printf.h

all: $(NAME)

$(NAME) : $(CNVRT) $(INCLUDE)
	@ar rcs $(NAME) $(CNVRT) $(INCLUDE)

%.o : %.c $(INCLUDE)
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(CNVRT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

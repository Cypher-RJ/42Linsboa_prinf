# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 15:16:44 by rcesar-d          #+#    #+#              #
#    Updated: 2024/05/23 17:00:04 by rcesar-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFILES = ft_printf.c ft_printchar.c ft_printstr.c ft_printnbr.c ft_printnbrhex.c \
		ft_printptr.c \

OFILES = $(CFILES:.c=.o)

CC = @cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(OFILES)
	@cd $(LIBFT_PATH) && make all && make bonus
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OFILES)

clean:
	@cd $(LIBFT_PATH) && make clean
	@rm -f $(OFILES)

fclean: clean
	@cd $(LIBFT_PATH) && make fclean
	@rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re
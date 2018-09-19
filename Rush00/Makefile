# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/10 15:56:24 by ecloete           #+#    #+#              #
#    Updated: 2018/06/10 16:28:33 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro
FILES = *.cpp
FLAGS = -Wall -Werror -Wextra -lncurses
all: $(NAME)
$(NAME):
		@clang++ $(FLAGS) $(FILES) -o $(NAME)
		@echo $(NAME) "compiled"
fclean:
		@rm -f $(NAME)
		@echo $(NAME) "fcleaned"
re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 16:08:30 by ecloete           #+#    #+#              #
#    Updated: 2018/06/08 16:08:33 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
FILES = FragTrap.cpp main.cpp
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) $(FILES) -o $(NAME) 
	@echo $(NAME) "compiled"

fclean:
	@rm -f $(NAME)
	@echo $(NAME) "fcleaned"

re: fclean all
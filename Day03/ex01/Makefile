# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 16:09:09 by ecloete           #+#    #+#              #
#    Updated: 2018/06/08 16:09:12 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
FILES = FragTrap.cpp main.cpp ScavTrap.cpp
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) $(FILES) -o $(NAME) 
	@echo $(NAME) "compiled"

fclean:
	@rm -f $(NAME)
	@echo $(NAME) "fcleaned"

re: fclean all
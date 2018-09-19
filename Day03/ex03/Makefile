# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 13:28:02 by ecloete           #+#    #+#              #
#    Updated: 2018/06/08 16:30:22 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
FILES = FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp main.cpp 
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) $(FILES) -o $(NAME)
	@echo $(NAME) "compiled"

fclean:
	@rm -f $(NAME)
	@echo $(NAME) "fcleaned"

re: fclean all
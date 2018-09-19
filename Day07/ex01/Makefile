# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 14:00:30 by ecloete           #+#    #+#              #
#    Updated: 2018/06/13 14:20:48 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
FILES = main.cpp iter.cpp
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	    @clang++ $(FLAGS) $(FILES) -o $(NAME) 
		    @echo $(NAME) "compiled"

fclean:
	    @rm -f $(NAME)
		    @echo $(NAME) "fcleaned"

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 14:00:30 by ecloete           #+#    #+#              #
#    Updated: 2018/06/14 12:15:56 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array
FILES = main.cpp
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	    @clang++ $(FLAGS) $(FILES) -o $(NAME) 
		    @echo $(NAME) "compiled"

fclean:
	    @rm -f $(NAME)
		    @echo $(NAME) "fcleaned"

re: fclean all

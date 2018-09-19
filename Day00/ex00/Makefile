# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 11:15:26 by ecloete           #+#    #+#              #
#    Updated: 2018/06/05 12:04:13 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILES = megaphone.cpp

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) -o $(NAME) $(FILES)
	@echo "megaphone compiled"

fclean:
	@rm -f $(NAME)
	@echo "megaphone fcleaned"
	
re: fclean all
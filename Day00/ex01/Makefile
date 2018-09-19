# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 11:57:17 by ecloete           #+#    #+#              #
#    Updated: 2018/06/05 15:54:30 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = phonebook.cpp Person.class.cpp

OBJECTS = $(FILES:.cpp=.o)

HEADER = phonebook.hpp

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) -c $(FILES) $(HEADER)
	@clang++ $(FLAGS) -o $(NAME) $(OBJECTS)
	@echo "phonebook compiled"

clean:
	@rm -f $(OBJECTS)
	@rm -f *.gch
	@echo "phonebook cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "phonebook fcleaned"

re: fclean all
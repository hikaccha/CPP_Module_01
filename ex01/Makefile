# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/16 21:27:52 by hichikaw          #+#    #+#              #
#    Updated: 2026/05/16 21:37:29 by hichikaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC = main.cpp Zombie.cpp ZombieHorde.cpp
OBJ = $(SRC:.c=.o)
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=++98 -pedantic-errors

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/16 19:18:48 by hichikaw          #+#    #+#              #
#    Updated: 2026/05/16 22:10:59 by hichikaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.c=.o)
CXX = c++
RM = rm -fr
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 09:57:56 by nbaidaou          #+#    #+#              #
#    Updated: 2025/10/25 14:17:18 by nbaidaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp  main.cpp 
OBJ = $(SRC:.cpp=.o)

NAME = out

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp  Fixed.hpp 
	$(CXX) $(CXXFLAGS) -c $<  -o $@

clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
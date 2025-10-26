# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 09:50:53 by hporta-c          #+#    #+#              #
#    Updated: 2025/10/25 11:16:27 by hporta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed\ is\ for\ losers
CXX = c++
CXXFLAGS = -Wall -Wextra -Wall -I. -std=c++98
SRCS = main.cpp loser.cpp 
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all re
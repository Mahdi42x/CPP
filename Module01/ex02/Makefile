# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 16:38:56 by mawada            #+#    #+#              #
#    Updated: 2025/04/23 18:39:06 by mawada           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BRAIN

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
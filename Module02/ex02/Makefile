# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 16:38:56 by mawada            #+#    #+#              #
#    Updated: 2025/04/24 14:57:59 by mawada           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

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
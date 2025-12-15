# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 07:54:19 by thodavid          #+#    #+#              #
#    Updated: 2025/12/15 13:24:29 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####
#Var#
#####
NAME	= Abstract
FLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow
SRCDIR	= src
OBJDIR	= obj
INCLUDES= -I.

#####
#Src#
#####
SRC		= main Animal Dog Cat WrongAnimal WrongCat Brain
SRCS	= $(addprefix $(SRCDIR)/,$(addsuffix .cpp,$(SRC)))
OBJ		= $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

#######
#Rules#
#######
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "✅ ready ✅"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	c++ $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abelfranciscusvanbergen <abelfranciscus      +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/12 21:00:09 by abelfrancis   #+#    #+#                  #
#    Updated: 2020/10/12 21:22:51 by abelfrancis   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
C++FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):
	clang++ $(C++FLAGS) megaphone.cpp -o $(NAME)

clean:
	rm -rf megaphone

fclean: clean

re: fclean all

.PHONY: all clean fclean re

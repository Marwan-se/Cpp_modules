NAME = megaphone
SRCS = megaphone.cpp
GPP = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(GPP) $(FLAGS) -c -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
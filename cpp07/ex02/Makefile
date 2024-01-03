NAME= Array
INC= Array.hpp
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -std=c++98 -fsanitize=address -g
FLAGS= -Wall -Wextra -Werror
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $@ $^

%.o: %.cpp $(INC)
	$(CPP) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
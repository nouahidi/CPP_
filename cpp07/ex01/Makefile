NAME= Iter
INC= iter.hpp
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -std=c++98 -fsanitize=address
FLAGS= -Wall -Wextra -Werror -g
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
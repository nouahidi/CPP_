NAME= RPN
INC= RPN.hpp
SRC= RPN.cpp main.cpp util.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -std=c++98 -g
FLAGS= -Wall -Wextra -Werror -fsanitize=address
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
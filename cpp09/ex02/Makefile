NAME= PmergeMe
INC= PmergeMe.hpp
SRC= PmergeMe.cpp util.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -fsanitize=address -g
FLAGS= -Wall -Wextra -Werror -std=c++98
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
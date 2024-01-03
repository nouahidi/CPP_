NAME= Fixed
INC= Fixed.hpp
SRC= Fixed.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98
CPP= c++ -g
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $@ $^

%.o:%.cpp $(INC)
	$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(OBJ) $(NAME)

re: fclean all
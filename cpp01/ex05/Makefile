NAME= Harl
INC= Harl.hpp
SRC= main.cpp Harl.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -g
FLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $@ $^

%.o:%.cpp $(INC)
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(OBJ) $(NAME)

re: fclean all

NAME= FREE_FIRE
INC= Weapon.hpp HumanA.hpp HumanB.hpp
SRC= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
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

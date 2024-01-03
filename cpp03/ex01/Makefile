NAME= ScavTrap
SRC= ScavTrap.cpp ClapTrap.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
INC= ClapTrap.hpp ScavTrap.hpp
CPP= c++ -g
CPPFLAGS= -Wall -Wextra -Werror
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) -o $@ $^

%.o:%.cpp $(INC)
	@$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
NAME= FragTrap
INC= FragTrap.hpp ClapTrap.hpp ScavTrap.hpp
SRC= FragTrap.cpp ClapTrap.cpp ScavTrap.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -g
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp $(INC)
	@$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
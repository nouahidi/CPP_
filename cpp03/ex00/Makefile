NAME= ClapTrap
INC= ClapTrap.hpp
SRC= ClapTrap.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -g
CPPFLAGS= -Wall -Wextra -Werror -fsanitize=address
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) -o $@ $^

%.o:%.cpp $(INC)
	@$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(OBJ) $(NAME)

re: fclean all
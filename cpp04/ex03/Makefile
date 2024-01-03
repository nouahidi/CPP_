NAME= Interface
INC= AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp MateriaSource.hpp  IMateriaSource.hpp
SRC= AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -std=c++98 -g
CPPFLAGS= -Wall -Wextra -Werror 
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp $(INC)
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
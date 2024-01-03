NAME= Base
INC= Base.hpp ClassA.hpp ClassB.hpp ClassC.hpp Fonctions.hpp
SRC= Base.cpp ClassA.cpp ClassB.cpp ClassC.cpp Fonctions.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
RM= rm -rf

all	: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) -o $@ $^

%o : %cpp $(INC)
	$(CPP) $(FLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
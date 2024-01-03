NAME= Animal
INC= Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
SRC= Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp\
	Brain.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++  -g -std=c++98
CPPFLAGS= -Wall -Wextra -Werror
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $@ $^

%.o:%.cpp $(INC)
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
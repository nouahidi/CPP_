NAME= Convert
INC= ScalarConverter.hpp
SRC= ScalarConverter.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror -g
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) ${FLAGS} -o $@  $^

%.o: %.cpp $(INC)
	$(CPP) ${FLAGS} -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
re: clean all
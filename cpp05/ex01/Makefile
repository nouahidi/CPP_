NAME= Bureaucrat
INC= Bureaucrat.hpp Form.hpp
SRC= main.cpp Bureaucrat.cpp Form.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror
CPP= c++ -std=c++98
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $@ $^

%.o: %.cpp $(INC)
	$(CPP) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
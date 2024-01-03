NAME= Serializer
INC= Serializer.hpp Data.hpp
SRC= Serializer.cpp Data.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Werror -Wextra
CPP= c++ -g -std=c++98
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
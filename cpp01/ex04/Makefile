NAME= replace
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -g #-fsanitize=address
FLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $@ $^

%.o:%.cpp
	@$(CPP) $(FLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(OBJ) $(NAME)

re: fclean all

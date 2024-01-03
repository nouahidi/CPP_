NAME= Megaphone
SRC= megaphone.cpp
OBJ= $(SRC:.cpp=.o)
CPP= c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):$(OBJ)
		$(CPP) $(CFLAGS) -o $@  $^

%.o:%.cpp
		$(CPP) $(CFLAGS) -o $@ -c $<

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) $(OBJ)

re: fclean all

NAME=PhoneBook
INC= Contact.hpp PhoneBook.hpp
SRC = Contact.cpp main.cpp PhoneBook.cpp addcontact.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++ -g
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^ -g

%.o:%.cpp $(INC)
		$(CPP) $(CFLAGS) -o $@ -c $<

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME) $(OBJ)
re: fclean all
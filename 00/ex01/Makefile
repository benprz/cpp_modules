#MAKEFLAGS += --silent

NAME = PhoneBook
CC = clang++
CPPFLAGS = -g3 -Wextra -Wall -Werror
INC_DIR = ./
INC =	PhoneBook.hpp \
		Contact.hpp

SRC_DIR = ./
SRC =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJ_DIR = .obj/
OBJ = $(SRC:%.cpp=$(OBJ_DIR)%.o)

.PHONY : all clean fclean re exec

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -I$(INC_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(addprefix $(INC_DIR),$(INC))
	mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -I$(INC_DIR) -c $< -o $@

exec:
	./$(NAME)

norm:
	norminette

clean:
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(NAME)

re: 
	$(MAKE) fclean
	$(MAKE) all

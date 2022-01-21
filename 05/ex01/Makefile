#MAKEFLAGS += --silent

NAME = Form
CC = clang++
CPPFLAGS = -g3 -Wextra -Wall -Werror -std=c++98
INC_DIR = ./
INC =	Bureaucrat.hpp \
		Form.hpp

SRC_DIR = ./
SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJ_DIR = .obj/
OBJ = $(SRC:%.cpp=$(OBJ_DIR)%.o)

.PHONY : all clean fclean re exec

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(addprefix $(INC_DIR),$(INC))
	mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(NAME)

re: 
	$(MAKE) fclean
	$(MAKE) all

#MAKEFLAGS += --silent

NAME = DiamondTrap
CC = c++
CPPFLAGS = -g3 -Wextra -Wall -Werror -Wshadow -std=c++98
INC_DIR = ./
INC =	ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp \
		DiamondTrap.hpp

SRC_DIR = ./
SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp


OBJ_DIR = .obj/
OBJ = $(SRC:%.cpp=$(OBJ_DIR)%.o)

.PHONY : all clean fclean re exec

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)

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

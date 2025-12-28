EXE = megaphone

CPP_COMPILER = c++
CPP_FLAGS    = -Wall -Wextra -Werror -std=c++98

CPP_SRC = megaphone.cpp
CPP_OBJ = $(CPP_SRC:.cpp=.o)

all: $(EXE)

$(EXE): $(CPP_OBJ)
	$(CPP_COMPILER) $(CPP_FLAGS) -o $(EXE) $(CPP_OBJ)

%.o: %.cpp
	$(CPP_COMPILER) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(CPP_OBJ)

fclean: clean
	rm -f $(EXE)

re: fclean all

.PHONY: all clean fclean re


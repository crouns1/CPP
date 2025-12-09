# Program name
EXE = megaphone

# Compiler and flags
CPP_COMPILER = c++
CPP_FLAGS    = -Wall -Wextra -Werror -std=c++98

# Source and object files
CPP_SRC = megaphone.cpp
CPP_OBJ = $(CPP_SRC:.cpp=.o)

# Default rule
all: $(EXE)

# Link executable
$(EXE): $(CPP_OBJ)
	$(CPP_COMPILER) $(CPP_FLAGS) -o $(EXE) $(CPP_OBJ)

# Compile .cpp to .o
%.o: %.cpp
	$(CPP_COMPILER) $(CPP_FLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(CPP_OBJ)

# Clean everything
fclean: clean
	rm -f $(EXE)

# Rebuild
re: fclean all

.PHONY: all clean fclean re


EXE = phonebook
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXE) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXE)

re: fclean all

debug: CXXFLAGS += -g3 -O0
debug: re

.PHONY: all clean fclean re debug

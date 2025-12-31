NAME = sed

SRCS = main.cpp Replace.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

tests: tests.o Replace.o
	$(CXX) $(CXXFLAGS) -o tests tests.o Replace.o

clean:
	rm -f $(OBJS) tests.o

fclean: clean
	rm -f $(NAME) tests

re: fclean all

.PHONY: all tests clean fclean re

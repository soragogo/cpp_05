NAME=a.out

CXX=g++

CXXFLAGS=-Wall -Wextra -Werror -stdc++98

SRCS=main.cpp /
	Bureaucrat.cpp

OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CFLAGS) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re:fclean
	make all

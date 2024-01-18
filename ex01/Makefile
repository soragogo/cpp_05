NAME=a.out

CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS=main.cpp \
	Bureaucrat.cpp \
	Form.cpp

OBJS=$(addprefix objs/, $(SRCS:.cpp=.o))

ifeq ($(MAKECMDGOALS), debug)
	CXXFLAGS += -g -fsanitize=address
endif

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

objs/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf objs

fclean:clean
	rm -rf $(NAME)

re:fclean
	make all

-include objs/*.d

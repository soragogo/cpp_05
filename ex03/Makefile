NAME=a.out

CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SRCS=Intern.cpp \
	RobotomyRequestForm.cpp \
	AForm.cpp \
	main.cpp \
	Bureaucrat.cpp \
	PresidentialPardonForm.cpp \
	ShrubberyCreationForm.cpp

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
	rm -rf $(NAME) *_file

re:fclean
	make all

debug:all

-include objs/*.d

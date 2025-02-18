NAME		= prog
CXX			= c++
CXXFLAGS	= -g3 -Wall -Werror -Wextra -std=c++98
RM			= rm -f

SRCS	=	./main.cpp \
			./AMateria.cpp \
			./MateriaSource \
			./Character \
			./Cure \
			./Ice.cpp
			
			
			
OBJS	= $(SRCS:.cpp=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I.

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I.

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
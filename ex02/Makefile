NAME	=  burning_abstract
CC		= c++
CFLAGS	= -g3 -Wall -Werror -Wextra -std=c++98
RM		= rm -f

SRCS	=	./main.cpp \
			./Animal.cpp \
			./Cat.cpp \
			./Brain.cpp \
			./Dog.cpp 
		#	./WrongAnimal.cpp \
			./WrongCat.cpp \ #
			
			
OBJS	= $(SRCS:.cpp=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
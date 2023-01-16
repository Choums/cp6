NAME    = Convert
OS		= $(shell uname)

# directories
SRCDIR        =    ./src
INCDIR        =    ./includes
OBJDIR        =    ./obj

HEADER		=	Convert.hpp

# src / obj files
SRC        =	main.cpp\
				Convert.cpp
				

OBJ        = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
OBJINC		=	$(addprefix $(INCDIR)/,$(HEADER))
# compiler
CC        = c++
CFLAGS    = -Wall -Wextra -Werror -std=c++98 -Wconversion -g3 #-fsanitize=address


all:	obj $(NAME)

obj:	
		mkdir -p $(OBJDIR)


$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp	${OBJINC}
				$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<


$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -lm -o $(NAME)

clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -rf $(NAME)

re:		fclean
		make all
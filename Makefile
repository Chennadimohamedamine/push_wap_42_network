FILESOURCE = utils/check.c utils/makeLine.c utils/splitNumber.c \
			stack/stack_function.c  stack/checkSortStack.c  stack/getMaxStack.c stack/stack_utils.c\
			sort/sort3.c sort/sortXX.c sort/moves.c sort/moves2.c sort/sortUtils.c 
NAME = LibPushSwap.a		
OBJECTFILES = $(FILESOURCE:%.c=%.o)
PROGRAM = push_swap

all : $(NAME)
	cc -Wall -Wextra -Werror push_swap.c $(NAME)-o $(PROGRAM) 

$(NAME): $(OBJECTFILES)
	ar rcs $(NAME) $(OBJECTFILES)

%.o: %.c push_swap.h
	cc -Wall -Wextra -Werror -o $@ -c $<

clean:
	rm -f $(OBJECTFILES) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re